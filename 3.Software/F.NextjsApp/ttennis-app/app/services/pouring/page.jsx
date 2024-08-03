"use client";

import { motion } from "framer-motion";
import { useState } from 'react';
import { FaCircle } from 'react-icons/fa';

//components
import { Button } from '@/components/ui/button';
import PageButton from '@/components/PageButton';
import LiveParameters from '@/components/LiveParameters';

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
            <div>倒球模式 Pouring Mode</div>
          </Button>
        </div>
      </div>
    </div>
  );
};


const LiveStream = ({ activeCircle, setActiveCircle }) => {
  const handleCircleClick = (circle) => {
    if (activeCircle === circle) setActiveCircle(null); // 如果再次點擊相同的 Circle，則重置為綠色
    else setActiveCircle(circle);
  };

  return (
    <div className="bg-gray-600 p-4 rounded-3xl flex-grow relative">
      <div className="justify-center text-center">
        <h1 className="text-2xl font-semibold text-white ">請選擇供球位置</h1>
        <p className="text-1xl font-semibold text-white">Please Choose the position of ball serving.</p>
      </div>

      <div className="flex justify-center items-center" style={{ height: '300px' }}>
        <img 
          src="/assets/photo/ttennis-table.svg" 
          alt="Table Tennis" 
          style={{ display: "block", margin: "auto", transform: "scale(0.8)" }}
        />
        <FaCircle 
          className={`${activeCircle === 'left' ? "text-rose-500" : "text-accent"} text-[52px] absolute ml-[-17rem]`} 
          onClick={() => handleCircleClick('left')} 
          style={{ cursor: 'default' }} 
        />
        <FaCircle 
          className={`${activeCircle === 'right' ? "text-rose-500" : "text-accent"} text-[52px] absolute mt-[-1.5rem] mr-[-16rem]`}
          onClick={() => handleCircleClick('right')} 
          style={{ cursor: 'default' }} 
        />
      </div>

      <FaCircle 
        className={`${activeCircle === 'top' ? "text-rose-500" : "text-accent"} text-[52px] absolute 
        mt-[-16rem] mr-[-4rem] right-1/2 transform -translate-x-1/2`} 
        onClick={() => handleCircleClick('top')} 
        style={{ cursor: 'default' }}
      />

      <FaCircle 
        className={`${activeCircle === 'bottom' ? "text-rose-500" : "text-accent"} text-[52px] absolute mt-[-4rem] ml-[-1rem] left-1/2 transform -translate-x-1/2`} 
        onClick={() => handleCircleClick('bottom')} 
        style={{ cursor: 'default' }}
      />
    </div>
  );
};

const Pouring = () => {
  const [showPopup, setShowPopup] = useState(false);
  const [activeCircle, setActiveCircle] = useState(null);

  const handleStart = () => {
    setShowPopup(true);
  };

  const handleClosePopup = () => {
    setShowPopup(false);
  };

  return (
    <div className="min-h-screen flex flex-col">
      <Header />
      
      <motion.section 
        initial={{ opacity: 0 }}
        animate={{ 
          opacity: 1 , 
          transition: {delay: 0, duration: 0.5, ease: "easeIn"}
        }}
        className="flex-grow flex flex-col px-6 py-4"
      >
        <div className="flex gap-5 flex-grow">
          <div className="w-[30%] flex flex-col gap-5">
            <LiveParameters />
            <PageButton 
              onStart={handleStart} 
              onClosePopup={handleClosePopup} 
              activeCircle={activeCircle} 
              text="Moving ..."
            />
          </div>
          <LiveStream 
            activeCircle={activeCircle} 
            setActiveCircle={setActiveCircle} 
          />
        </div>
      </motion.section>

    </div>
  );
};

export default Pouring;