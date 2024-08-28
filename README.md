<div align="center">
 <h1> TTennis Pickup Robot 桌球自動拾取智慧機器人 </h1>
</div>

> 清華大學 動力機械系25級 畢業專題（2024）

> 本人（pomelo925）負責項目為全軟體、部分韌體及部分電路。
> 非本人負責項目最終會清楚標註貢獻者。

</br>

<div align="center">
 <h2> ⭐⭐⭐ 整體架構 ⭐⭐⭐</h2>
</div>

如下圖，本專題主要區分為以下四大部分。

![alt text](/5.Docs/assets/overall.png)


</br>

<div align="center">
 <h2> ⭐⭐ Hardware 硬體 ⭐⭐</h2>
</div>

外購硬體主要有兩台相機 [Intel® RealSense™ Depth Camera D435](https://www.intelrealsense.com/depth-camera-d435/)、[Luxonis OAK-D](https://shop.luxonis.com/products/oak-d?srsltid=AfmBOoonQ7t1-zn0nqSzjS6hqH9pHZsBbMcbB3aGryrPGHOZsLWWNm30) 以及上位機 [iKOOLCORE R2](https://www.ikoolcore.com/en-tw/products/ikoolcore-r2?srsltid=AfmBOooM286Be_Vosi4SvQe132LjfMP1y9nNQp6Jv6tcy6CoUxvYuutZ)。


![alt text](/5.Docs/assets/hardware.png)


我們自行設計 PCB 以增加複雜電路的穩定性與減少過多明線帶來的困擾。包含以下三塊電路板：

* 電源分壓板：將 [18V工具機鋰電池](https://www.makitatools.com/products/details/BL1850B-2) 降壓至12V、5V、3.3V，同時支援 PD 快充。其中 DC-DC Bucker 皆採用可調式閉路電壓控制晶片，並充分考慮降噪濾波。PD 快充用以支援上位機的運作。

* 邏輯電路板：運算單元為 Cortex M7 內核的 [STM32H723ZGT6](https://www.mouser.tw/ProductDetail/STMicroelectronics/STM32H723ZGT6?qs=sPbYRqrBIVkPaOxQT7wG%252BA%3D%3D)，包含讀取直流馬達之增量式編碼器、閉路控制直流馬達、ROS1 節點通訊等等。並引出 USART 通訊引腳、編碼器端子座、外部晶振時間源、CP2102 TTL 轉 Type-C 通訊等等。

* 馬達驅動板：電力直接由電源分壓板供給 12V，PWM 控制訊號則由邏輯電路板經軟排線傳遞，馬達驅動晶片為 [VNH5019](https://www.mouser.tw/ProductDetail/STMicroelectronics/EVAL-VNH5019-P1?qs=4b8myOmUP%252BuULWYKW0CsPg%3D%3D)。由於功率較大，與邏輯電路板做物理隔離，抗 EMI。 

</br></br>


<div align="center">
    <h2>⭐⭐ Firmware 韌體 ⭐⭐</h2>
</div>

開發平台為 [STM32CubeIDE](https://www.st.com/en/development-tools/stm32cubeide.html)，下圖為本專案資料夾架構與各自任務。

![alt text](/5.Docs/assets/stm32.png)

此為 C/C++ 混編專案，並以任務導向將代碼封裝成獨立資料夾，透過解藕增價可移植性，架構圖中箭頭部分為針對底盤馬達控制中，ROS1 與 STM32 內部主要的通訊與變數關係。

> 實作細節可參閱 [全端機器人技術筆記 -【韌體】STM32CubeIDE - C/C++ 混編專案架構](https://hackmd.io/@925/robot/%2F%40925%2Fstm-project)。

</br></br>

<div align="center">
 <h2> ⭐⭐ Software 軟體 ⭐⭐ </h2>
</div>

軟體複雜度較高，因此會拆分成較多部分說明。

![alt text](/5.Docs/assets/software.png)

這裡我簡述各區塊執行的任務，並於底下補充技術細節。後端軟體幾乎運行於 [ROS2](https://docs.ros.org/en/foxy/index.html) 平台之上。

* 前端 - Nextjs / Framer Motion / Tailwind CSS
  * 與用戶最直接的交互接口，可點擊螢幕使機器人執行任務，亦顯示機器人即時運動訊息。
  * 本專案模板與架構很大程度地參考 [
Cristian Mihai 的開源專案](https://www.youtube.com/watch?v=dImgZ_AH7uA&t=194s)。

* 後端 - Coordinator 協調器
  * 作為最上層的節點排程與協調器，依當前任務及情景動態調度必要資源。

* 後端 - Navigation 導航
  * 基於官方開源 [Nav2 導航堆棧](https://docs.nav2.org/)，開發 AMR 的路徑規劃、動靜態避障、代價地圖堆疊等。

* 後端 - EdgeNN 神經網路邊緣運算
  * [Luxonis OAK-D](https://shop.luxonis.com/products/oak-d?srsltid=AfmBOoonQ7t1-zn0nqSzjS6hqH9pHZsBbMcbB3aGryrPGHOZsLWWNm30)，即時偵測桌球、桌球桌、置球架以及運動員，並回傳空間座標資訊。

* 後端 - RTAB-Map 建圖定位
  * 使用開源 [RTAB-Map](https://introlab.github.io/rtabmap/) 為室內環境作三維建模，為導航節點提供定位的依據。

* 後端 - Coomunication 通訊
  * 基於 [rosserial](https://wiki.ros.org/rosserial) 實現 STM - ROS1 通訊。
  * 基於 [ROS1 Bridge](https://github.com/ros2/ros1_bridge) 實現 ROS1 - ROS2 通訊。

</br></br>

<div align="center">
 <h2> ⭐ 軟體後端 - EdgeNN ⭐ </h2>
</div>

機上搭載嵌入式 AI RGBD 相機 [Luxonis OAK-D](https://shop.luxonis.com/products/oak-d?srsltid=AfmBOoonQ7t1-zn0nqSzjS6hqH9pHZsBbMcbB3aGryrPGHOZsLWWNm30)，大大減少了上位機的運算負擔。相機端給出偵測物件的空間座標資訊後，經過靜態與動態的座標轉換（基於 [tf2](https://docs.ros.org/en/foxy/Tutorials/Intermediate/Tf2/Tf2-Main.html)）後映射至導航的全局代價地圖中。

本專案使用模型為 [Ultralytics](https://www.ultralytics.com/zh) 發佈的 [YOLOv8 模型](https://github.com/ultralytics/ultralytics)。此為當前 [depthai-experiments
](https://github.com/luxonis/depthai-experiments) 能支援 [on-device programming](https://docs-old.luxonis.com/en/latest/pages/tutorials/on-device-programming/) 的最新模型。部署時須將 yolov8n 模型變體之權重檔轉為輕量化格式，實測幀率浮動於 6 ~ 10 hz 間。

training set 主要由 [Roboflow Universe](https://universe.roboflow.com/) 上已 annotated 的開源資料集 [Ping Pong Detection Computer Vision Project](https://universe.roboflow.com/pingpong-ojuhj/ping-pong-detection-0guzq) 提供。資料再由 [Roboflow](https://roboflow.com/) 協助增強處理，並於本地端（RTX 4070、32GB RAM）滿載訓練。

> 訓練細節可參考 [機器人全端技術筆記 -【軟體】影像處理 -【物件偵測】Training 階段](https://hackmd.io/@925/robot/%2F%40925%2Ftraining)。

![alt text](/5.Docs/assets/yolov8.png)

最後，為了取得深度資訊，須使用 DepthAI 的 [YoloSpatialDetectionNetwork](https://docs.luxonis.com/software/depthai-components/nodes/yolo_spatial_detection_network/)，疊合相機原生深度資訊與 YOLO 物件屬性，計算出偵測物件合理的空間座標。

> 此部分詳情可參閱 [機器人全端技術筆記 -【軟體】影像處理 -【物件偵測】Deploying 階段](https://hackmd.io/@925/robot/%2F%40925%2Fdeploy)。

</br></br>

<div align="center">
 <h2> ⭐ 軟體後端 - Communication ⭐ </h2>
</div>

通訊節點如上所述，執行任務明確有二，「STM32 - ROS1 通訊」與「ROS1 - ROS2 通訊」。其實合理的架構是將 [microros](https://micro.ros.org/) 部署於 STM32 上，但礙於諸多測試錯誤且時間不夠。 

> 關於 STM32 - ROS1 通訊可參閱 [機器人全端技術筆記 -【韌體】STM32CubeIDE - STM x ROS1](https://hackmd.io/@925/robot/%2F%40925%2Fstmros)。

關於 ROS1 - ROS2 通訊，十分感謝電資系朋友將 ROS2 Humble 版本的 ROS1 bridge 通訊之 Dockerfile 盡可能地做了容量優化，省下不少開發時間。這裡附上 Github：[YuZhong-Chen/ros2-essentials](https://github.com/YuZhong-Chen/ros2-essentials)、[j3soon/ros2-essentials](https://github.com/j3soon/ros2-essentials)。

