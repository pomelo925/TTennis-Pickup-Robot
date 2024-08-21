#usage: python3 spatial.py

import depthai as dai
import cv2
import time

# Path to the .blob file
BLOB_PATH = "model/best.blob"

# Label texts
labelMap = [
    "pongballs"
]

# Configuration parameters
ENABLE_GUI_CV = True
ENABLE_GUI_DEPTH = False
ENABLE_PRINT = True
ENABLE_CONFIDENCE = False  

# Single color for bounding boxes
COLOR = (0, 255, 0)  # Green

def create_pipeline():
    # Create pipeline
    pipeline = dai.Pipeline()

    # Create color camera node
    camRgb = pipeline.create(dai.node.ColorCamera)
    camRgb.setPreviewSize(640, 640)
    camRgb.setResolution(dai.ColorCameraProperties.SensorResolution.THE_1080_P)
    camRgb.setInterleaved(False)
    camRgb.setColorOrder(dai.ColorCameraProperties.ColorOrder.BGR)

    # Create mono camera nodes
    monoLeft = pipeline.create(dai.node.MonoCamera)
    monoRight = pipeline.create(dai.node.MonoCamera)
    monoLeft.setResolution(dai.MonoCameraProperties.SensorResolution.THE_400_P)
    monoRight.setResolution(dai.MonoCameraProperties.SensorResolution.THE_400_P)
    monoLeft.setBoardSocket(dai.CameraBoardSocket.CAM_B)
    monoRight.setBoardSocket(dai.CameraBoardSocket.CAM_C)

    # Create stereo depth node
    stereo = pipeline.create(dai.node.StereoDepth)
    stereo.setDefaultProfilePreset(dai.node.StereoDepth.PresetMode.HIGH_DENSITY)
    stereo.setDepthAlign(dai.CameraBoardSocket.CAM_A)
    monoLeft.out.link(stereo.left)
    monoRight.out.link(stereo.right)

    # Create YoloSpatialDetectionNetwork node
    spatialDetectionNetwork = pipeline.create(dai.node.YoloSpatialDetectionNetwork)
    spatialDetectionNetwork.setBlobPath(BLOB_PATH)
    spatialDetectionNetwork.setConfidenceThreshold(0.5)
    spatialDetectionNetwork.input.setBlocking(True)
    spatialDetectionNetwork.setBoundingBoxScaleFactor(0.4)
    spatialDetectionNetwork.setDepthLowerThreshold(20)
    spatialDetectionNetwork.setDepthUpperThreshold(5000)

    # Yolo specific parameters
    spatialDetectionNetwork.setNumClasses(1)
    spatialDetectionNetwork.setCoordinateSize(4)
    spatialDetectionNetwork.setAnchors([10,14, 23,27, 37,58, 81,82, 135,169, 344,319])
    spatialDetectionNetwork.setAnchorMasks({ "side26": [1,2,3], "side13": [3,4,5] })
    spatialDetectionNetwork.setIouThreshold(0.5)

    # Set spatial calculation algorithm to MIN
    ## Average/mean: the average of ROI is used for calculation.
    ## Min: the minimum value inside ROI is used for calculation.
    ## Max: the maximum value inside ROI is used for calculation.
    ## Mode: the most frequent value inside ROI is used for calculation.
    ## Median: the median value inside ROI is used for calculation.
    ## Default method is Median.
    spatialDetectionNetwork.setSpatialCalculationAlgorithm(dai.SpatialLocationCalculatorAlgorithm.MIN)

    # Linking
    camRgb.preview.link(spatialDetectionNetwork.input)
    stereo.depth.link(spatialDetectionNetwork.inputDepth)

    # Create outputs
    xoutRgb = pipeline.create(dai.node.XLinkOut)
    xoutNN = pipeline.create(dai.node.XLinkOut)
    xoutDepth = pipeline.create(dai.node.XLinkOut)
    xoutRgb.setStreamName("rgb")
    xoutNN.setStreamName("detections")
    xoutDepth.setStreamName("depth")
    spatialDetectionNetwork.out.link(xoutNN.input)
    spatialDetectionNetwork.passthrough.link(xoutRgb.input)
    spatialDetectionNetwork.passthroughDepth.link(xoutDepth.input)

    return pipeline

def process_frame(inRgb, inDet, inDepth, startTime, counter, fps):
    frame = inRgb.getCvFrame()
    depthFrame = inDepth.getFrame()

    depthFrameColor = None
    if ENABLE_GUI_DEPTH:
        depthFrameColor = cv2.normalize(depthFrame, None, 255, 0, cv2.NORM_INF, cv2.CV_8UC1)
        depthFrameColor = cv2.equalizeHist(depthFrameColor)
        depthFrameColor = cv2.applyColorMap(depthFrameColor, cv2.COLORMAP_HOT)

    # Calculate FPS
    counter += 1
    current_time = time.monotonic()
    if (current_time - startTime) > 1:
        fps = counter / (current_time - startTime)
        counter = 0
        startTime = current_time

    detections = inDet.detections
    height = frame.shape[0]
    width = frame.shape[1]

    for detection in detections:
        process_detection(frame, detection, height, width)

    if ENABLE_GUI_CV:
        cv2.putText(frame, "NN fps: {:.2f}".format(fps), (2, frame.shape[0] - 4), cv2.FONT_HERSHEY_TRIPLEX, 0.4, COLOR)
        cv2.imshow("rgb", frame)

    if ENABLE_GUI_DEPTH and depthFrameColor is not None:
        cv2.imshow("depth", depthFrameColor)

    return frame, depthFrameColor, startTime, counter, fps

def process_detection(frame, detection, height, width):
    ###
    # OpenCV Coordinate: origin at top-left corner (unit: pixels)
    # DepthAI Coordinate: origin at camera center (unit: millimeter)
    ###

    # Denormalize bounding box
    x1 = int(detection.xmin * width)
    x2 = int(detection.xmax * width)
    y1 = int(detection.ymin * height)
    y2 = int(detection.ymax * height)
    try:
        label = labelMap[detection.label]
    except:
        label = "pongballs"

    if ENABLE_GUI_CV:
        cv2.putText(frame, str(label), (x1 + 10, y1 + 20), cv2.FONT_HERSHEY_TRIPLEX, 0.5, COLOR)
        if ENABLE_CONFIDENCE:
            cv2.putText(frame, f"{detection.confidence:.2%}", (x1 + 10, y1 + 35), cv2.FONT_HERSHEY_TRIPLEX, 0.5, COLOR)
        cv2.putText(frame, f"X: {int(detection.spatialCoordinates.x)} mm", (x1 + 10, y1 + 50), cv2.FONT_HERSHEY_TRIPLEX, 0.5, COLOR)
        cv2.putText(frame, f"Y: {int(detection.spatialCoordinates.y)} mm", (x1 + 10, y1 + 65), cv2.FONT_HERSHEY_TRIPLEX, 0.5, COLOR)
        cv2.putText(frame, f"Z: {int(detection.spatialCoordinates.z)} mm", (x1 + 10, y1 + 80), cv2.FONT_HERSHEY_TRIPLEX, 0.5, COLOR)
        cv2.rectangle(frame, (x1, y1), (x2, y2), COLOR, cv2.FONT_HERSHEY_SIMPLEX)
        
    if ENABLE_PRINT:
        print(f"Time: {time.strftime('%Y-%m-%d %H:%M:%S', time.localtime())}")
        print(f"Class: {label}")
        if ENABLE_CONFIDENCE:
            print(f"Confidence: {detection.confidence:.2%}")
        print(f"[CV2] Bounding Box (pixels):")
        print(f"  Top Left (X,Y)     : ({x1}, {y1})")
        print(f"  Bottom Right (X,Y) : ({x2}, {y2})")
        print(f"[DepthAI] Center Coordinate (mm):")
        print(f"  (X,Y,Z) : ({int(detection.spatialCoordinates.x)}, {int(detection.spatialCoordinates.y)}, {int(detection.spatialCoordinates.z)})")
        print("---")

def main():
    max_retries = 3
    for attempt in range(max_retries):
        try:
            # Create pipeline
            pipeline = create_pipeline()

            # Connect to device and start pipeline
            with dai.Device(pipeline) as device:
                # Output queues
                qRgb = device.getOutputQueue(name="rgb", maxSize=4, blocking=False)
                qDet = device.getOutputQueue(name="detections", maxSize=4, blocking=False)
                qDepth = device.getOutputQueue(name="depth", maxSize=4, blocking=False)

                startTime = time.monotonic()
                counter = 0
                fps = 0
                
                while True:
                    try:
                        inRgb = qRgb.get()
                        inDet = qDet.get()
                        inDepth = qDepth.get()

                        if inRgb is None or inDet is None or inDepth is None:
                            continue

                        frame, depthFrameColor, startTime, counter, fps = process_frame(inRgb, inDet, inDepth, startTime, counter, fps)

                        if (ENABLE_GUI_CV or ENABLE_GUI_DEPTH) and cv2.waitKey(1) == ord('q'):
                            break
                    except RuntimeError as e:
                        print(f" <<< Runtime error >>> {e}")
                        break  # Break inner loop, try to reinitialize device

        except Exception as e:
            print(f"Attempt {attempt + 1} failed: {e}")
            if attempt < max_retries - 1:
                print("Retrying...")
                time.sleep(5)  # Wait 5 seconds before retrying
            else:
                print("Maximum retry attempts reached, exiting program.")
                break

    if ENABLE_GUI_CV or ENABLE_GUI_DEPTH:
        cv2.destroyAllWindows()

if __name__ == "__main__":
    main()