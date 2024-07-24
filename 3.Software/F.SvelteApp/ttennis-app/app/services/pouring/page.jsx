"use client";

import { motion } from "framer-motion";

import { useState } from 'react';
import Link from 'next/link';
import { Button } from '@/components/ui/button';
import { FaPlay, FaStop } from 'react-icons/fa';


const Header = () => {
  return (
    <div className="py-8 xl:py-12 pr-8 text-white">
      <div className="container mx-auto flex justify-between items-center">

        {/* logo */}
        <h1 className="text-3xl font-semibold pl-4">
          <span className="text-accent">TTennis</span> PickupRobot.
        </h1>

        {/* button */}
        <div className="flex items-center">
          <Button className="text-center text-3xl py-2 px-4 bg-accent rounded-2xl h-14">
            <div>撿球模式 Fetching Mode</div>
          </Button>
        </div>
      </div>
    </div>
  );
};

const LiveParameters = () => {
  return (
    <div className= "bg-gray-600 p-4 rounded-3xl flex-grow ">
      <h2 className="text-2xl font-semibold mb-4">Live Parameters</h2>
      <p>這裡是 info 區塊的內容。</p>
    </div>
  );
};

const LiveStream = () => {
  return (
    <div className="bg-gray-600 p-4 rounded-3xl flex-grow">
      <h2 className="text-2xl font-semibold mb-4">Live Stream</h2>
      <p>這裡是 live stream 區塊的內容。</p>
    </div>
  );
};

const PageButton = () => {
  const [isStarted, setIsStarted] = useState(false);

  const handleToggle = () => {
    setIsStarted(!isStarted);
  };

  return (
    <div className="w-full rounded-3xl flex-grow max-h-[100px] 
    flex items-center gap-8 justify-center">
      <Link href="/services">
        <Button className="text-center bg-accent rounded-2xl text-3xl h-20">
          <div>返回</div>
        </Button>
      </Link>

      <Button 
        onClick={handleToggle}
        style={{ backgroundColor: isStarted ? '#f43f5e' : '#00ff99' }} 
        className="text-center rounded-2xl text-3xl h-20
        flex items-center transition-colors duration-300"
      >
        <div className="flex items-center">
          {isStarted ? <FaStop /> : <FaPlay />}
        </div>
        <div>{isStarted ? '停止' : '開始'}</div>
      </Button>
    </div>
  );
};

const Pouring=()=>{
  return (
    <div className="min-h-screen flex flex-col">
      <Header />
      
      {/* Others */}
      <motion.section 
        initial={{ opacity: 0 }}
        animate={{ 
          opacity: 1 , 
          transition: {delay: 0, duration: 0.5, ease: "easeIn"}
        }}
        className="flex-grow flex flex-col px-6 py-4"
      >
        <div className="flex gap-5 flex-grow">
          {/* 左方包含 LiveParameters 和 PageOperation 的區塊 */}
          <div className="w-[30%] flex flex-col gap-5">
            <LiveParameters />
            <PageButton />
          </div>

          {/* 右方的 LiveStream 區塊 */}
          <LiveStream />
        </div>
      </motion.section>
    </div>
  );
};

export default Pouring;