"use client";

import { motion } from "framer-motion";
import Image from "next/image";

const Photo = () => {
  return <div className="w-full h-full relative">
    {/* image */}
    <motion.div 
      initial={{opacity:0}}
      animate={{
        opacity: 1,
        transition:{
          delay: 0.5, duration: 0.5, ease: "easeIn" 
        }
      }}
    >
      <div className="w-[298px] h-[298px] mix-blend-lighten absolute">
        <Image 
          src="/assets/photo/robot.svg" 
          priority 
          quality={100} 
          fill
          alt="robot thumbnail" 
          className="object-contain"/>
      </div>
    </motion.div>

    {/* circle */}
    <motion.svg 
      className="w-[300px] h-[300px]"
      fill="transparent"
      viewBox="0 0 506 506"
      xmlns="https://www.w3.org/2000/svg"
    >
      <motion.circle 
        cx="253" cy="253" r="250" 
        stroke="#00ff99" strokeWidth="8"
        strokeLinecap="round" strokeLinejoin="round"
        initial={{strokeDasharray: "14 10 0 0"}}
        animate={{
          strokeDasharray: ["15 120 25 25", "16 25 92 72", "14 180 23 22"],
          rotate: [120, 360]
        }}
        transition={{
          duration: 3,
          repeat: Infinity,
          repeatType: "reverse"
        }}
      >
      </motion.circle>
    </motion.svg>
  </div>
}

export default Photo