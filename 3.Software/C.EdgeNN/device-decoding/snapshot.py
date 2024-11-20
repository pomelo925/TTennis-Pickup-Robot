import cv2
import depthai as dai
import os

# 建立Pipeline
pipeline = dai.Pipeline()

# 創建彩色相機節點
camRgb = pipeline.create(dai.node.ColorCamera)
camRgb.setBoardSocket(dai.CameraBoardSocket.RGB)
camRgb.setResolution(dai.ColorCameraProperties.SensorResolution.THE_1080_P)

# 設置相機輸出
xoutVideo = pipeline.create(dai.node.XLinkOut)
xoutVideo.setStreamName("video")
camRgb.video.link(xoutVideo.input)

# 初始化裝置並啟動Pipeline
with dai.Device(pipeline) as device:
    videoQueue = device.getOutputQueue(name="video", maxSize=4, blocking=False)
    
    frame_count = 1
    while True:
        videoFrame = videoQueue.get()  # 獲取當前幀
        frame = videoFrame.getCvFrame()  # 轉換為OpenCV格式

        # 顯示畫面
        cv2.imshow("OAK-D Camera", frame)

        key = cv2.waitKey(1) & 0xFF
        if key == ord('q'):  # 按下 'q' 退出
            break
        elif key == ord(' '):  # 按下空白鍵拍照
            filename = f"{frame_count}.png"
            cv2.imwrite(filename, frame)
            print(f"Saved {filename}")
            frame_count += 1

# 釋放資源
cv2.destroyAllWindows()