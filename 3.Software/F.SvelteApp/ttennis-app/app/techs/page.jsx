"use client";

import { motion } from "framer-motion";
import React, { useState } from "react";

import { Swiper, SwiperSlide } from 'swiper/react';
import "swiper/css";

import { BsArrowUpRight, BsGithub } from "react-icons/bs";
import {
  Tooltip,
  TooltipContent,
  TooltipProvider,
  TooltipTrigger,
} from "@/components/ui/tooltip";

import Link from "next/link";
import Image from "next/image";
import LeftButton from "@/components/LeftButton";
import RightButton from "@/components/RightButton";

const technologies = [
  {
    num: '01',
    category: '建圖定位 RTAB-Map',
    description: 
    "RTAB-Map 是一種同步定位與建圖演算法，藉由閉環檢測器對增量式詞袋模型的外觀樣本進行擬和, \
    其外觀基礎資訊來自RGB-D或立體相機、LiDAR,並再與傳統里程計如IMU或輪路徑積分進行濾波定位。",
    stack: [
      {name: "Intel® RealSense™ D435"}, {name: "ArduIMU V3"},
    ],
    image: "/assets/photo/rtabmap.svg",
    live: "",
    github: "https://github.com/introlab/rtabmap_ros/tree/humble-devel"
  },
  {
    num: '02',
    category: '導航堆棧 Nav2',
    description: 
    "本專案使用 ROS2 Navigation2 導航堆棧框架全面開發機器人自主導航。將外界感測資訊融入具權重的代價柵格地圖中， \
    並透過控制器、規劃器及恢復器, 實現最優路徑演算、差動底盤速度控制及動態避障。",
    stack: [
      {name:"Robot Operating System 2"}, {name:"RViz2"},
    ],
    image: "/assets/photo/nav2.png",
    live: "",
    github: "https://github.com/ros-navigation/navigation2"
  },
  {
    num: '03',
    category: '邊緣運算 EDGE-NN',
    description: "機上搭載具有4 TOPS算力的RGB相機，實時針對場上之桌球、桌球桌及運動員 \
    進行物件偵測，本專案採用最新 YOLOv10 深度學習模型，透過邊緣硬體加速協助上位機整合資訊，與追求即時性的 RTAB-Map 雙輔雙成。",
    stack: [
      {name: "Luxonix OAK-D"}, {name: "YOLOv10"},
    ],
    image: "/assets/photo/edgenn.png",
    live: "",
    github: "https://github.com/luxonis/depthai-ros.git"
  },
  {
    num: '04',
    category: '電路板 PCB Layout',
    description: "桌球拾取機器人由高壓工具機電池作為動力來源，故我們自行設計多種 PCB 以滿足 \
    電壓分配、電流保護、馬達額定工作電壓供給、單晶片穩壓、USB PD 協議芯片、各種客製化端子接口等，並充分考慮濾波降噪。",
    stack: [
      {name: "SMT"}, {name: "EasyEDA"},
    ],
    image: "/assets/photo/pcb.png",
    live: "",
    github: "https://github.com/pomelo925/TTennis-Pickup-Robot/tree/main/1.Hardware"
  },
];

const Techs = () => {
  const [technology, setTechnology] = useState(technologies[0]);

  const handleSlideChange = (swiper) => {
    setTechnology(technologies[swiper.activeIndex]);
  };

  return (
    <motion.section 
      initial={{ opacity: 0 }}
      animate={{ 
        opacity: 1 , 
        transition: {delay: 0, duration: 0.4, ease: "easeIn"}
      }}
      className="max-h-[520px] flex flex-col justify-center px-4 py-10"
    >
      <div className="container mx-auto">
        <div className="flex flex-row gap-[30px]">
          <div className="w-[50%] h-[380px] flex flex-col justify-between order-none"> 
            <div className="flex items-center justify-between">
              {/* outline num */}
              <div className="text-8xl leading-none font-extrabold text-transparent text-outline">
                {technology.num}
              </div>
              {/* buttons */}
              <div className="flex items-center gap-6">
                <Link href={technology.live}> 
                  <TooltipProvider delayDuration={100}>
                    <Tooltip>
                      <TooltipTrigger className="w-[70px] h-[70px] rounded-full bg-white/5 flex justify-center items-center group">
                        <BsArrowUpRight className="text-white text-2xl group-hover:text-accent"/>
                      </TooltipTrigger>
                      <TooltipContent>
                        <p>Live</p>
                      </TooltipContent>
                    </Tooltip>
                  </TooltipProvider>
                </Link>
                <Link href={technology.github}> 
                  <TooltipProvider delayDuration={100}>
                    <Tooltip>
                      <TooltipTrigger className="w-[70px] h-[70px] rounded-full bg-white/5 flex justify-center items-center group">
                        <BsGithub className="text-white text-3xl group-hover:text-accent"/>
                      </TooltipTrigger>
                      <TooltipContent>
                        <p>Github repository</p>
                      </TooltipContent>
                    </Tooltip>
                  </TooltipProvider>
                </Link>
              </div>
            </div>
            <div className="flex flex-col gap-[12px]">
              {/* project category */}
              <h2 className="text-[42px] font-bold leading-none text-white group-hover:text-accent transition-all duration-500 capitalize">
                {technology.category}
              </h2>
              {/* borders */}
              <div className="border border-white/20"> </div>
              {/* project description */}
              <p className="text-[18px] text-white/80">
                {technology.description}
              </p>
              <br/>
              {/* stack */}
              <ul className="flex gap-4">
                {technology.stack.map((item, index) => (
                  <li key={index} className="text-accent text-xl">
                    {item.name}
                    {index !== technology.stack.length - 1 && ","}
                  </li>
                ))}
              </ul>
            </div>
          </div>
          <div className="w-[50%] relative"> 
            <Swiper 
              spaceBetween={30} 
              slidesPerView={1} 
              className=" mb-12"
              onSlideChange={handleSlideChange}
            >
              {technologies.map((technology, index) => (
                <SwiperSlide key={index} className="w-full"> 
                  <div className="h-[420px] relative group flex justify-center items-center">
                    {/* overlay */}
                    <div className="rounded-md-custom absolute top-0 bottom-0 w-full h-full bg-black/10 z-10"> </div>
                    {/* image */}
                    <div className="relative w-full h-full">
                      <Image 
                        src={technology.image} 
                        fill
                        className="object-cover rounded-md-custom"
                        alt=""
                      />
                    </div>
                  </div>
                </SwiperSlide>
              ))}
              
              {/* Slider Buttons */}
              <div className="absolute inset-y-0 flex justify-between items-center px-4 z-20 w-full">
              <LeftButton 
                containerStyles="flex justify-center items-center w-[44px] h-[44px] 
                  bg-accent/60 hover:bg-accent/90 text-primary/60 hover:text-primary/90 text-[22px] transition-all"
                btnStyles="absolute left-4"
                iconsStyles=""
              />
              <RightButton 
                containerStyles="flex justify-center items-center w-[44px] h-[44px] 
                  bg-accent/60 hover:bg-accent/90 text-primary/60 hover:text-primary/90 text-[22px] transition-all"
                btnStyles="absolute right-4"
                iconsStyles=""
              />
              </div>
            </Swiper>
          </div>
        </div>
      </div>
    </motion.section>
  )
};

export default Techs;
