#usage: python3 rgb.py -conf model/best.json

from depthai_sdk import OakCamera, ArgsParser
import argparse
import cv2

# Parse arguments
parser = argparse.ArgumentParser()
parser.add_argument("-conf", "--config", help="Trained YOLO json config path", default='model/best.json', type=str)
args = ArgsParser.parseArgs(parser)

# Define the callback function
def callback(packet):
    frame = packet.frame
    detections = packet.detections

    for detection in detections:
        # Print detection results
        print("<=== Detection attributes ===>")
        print(f"class: {detection.label_str}")
        print(f"confidence: {round(detection.confidence, 4)}")
        print("bbox:")
        print(f"  top_left_x: {round(detection.top_left[0], 4)}")
        print(f"  top_left_y: {round(detection.top_left[1], 4)}")
        print(f"  bottom_right_x: {round(detection.bottom_right[0], 4)}")
        print(f"  bottom_right_y: {round(detection.bottom_right[1], 4)}")
        print(f"ts: {detection.ts}")
        print("===")

        # Draw bounding box and label on the image
        bbox = [
            int(detection.top_left[0] * frame.shape[1]),
            int(detection.top_left[1] * frame.shape[0]),
            int(detection.bottom_right[0] * frame.shape[1]),
            int(detection.bottom_right[1] * frame.shape[0])
        ]
        cv2.rectangle(frame, (bbox[0], bbox[1]), (bbox[2], bbox[3]), (0, 255, 0), 2)
        
        # Compute center point
        center_x = (bbox[0] + bbox[2]) // 2
        center_y = (bbox[1] + bbox[3]) // 2
        
        
        # Display x, y on the image
        label = f"{detection.label_str}: {detection.confidence:.2f}"
        cv2.putText(frame, label, (bbox[0], bbox[1] - 30), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
        coord_label = f"x:{center_x} y:{center_y}"
        cv2.putText(frame, coord_label, (bbox[0], bbox[1] - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)

    # Display the image
    cv2.imshow("Detection Results", frame)
    cv2.waitKey(1)

# Create an OakCamera object
with OakCamera(args=args) as oak:
    color = oak.create_camera('color')
    nn = oak.create_nn(args['config'], color, nn_type='yolo', spatial=True)
    oak.visualize(nn.out.passthrough, callback=callback, fps=True)
    oak.start(blocking=True)

# Cleanup
cv2.destroyAllWindows()
