"use client";

import { motion } from "framer-motion";
import { useState } from 'react';

// Components
import { Button } from '@/components/ui/button';
import PageButton from '@/components/PageButton';
import LiveParameters from '@/components/LiveParameters';

const Header = () => (
  <div className="py-8 xl:py-12 pr-8 text-white">
    <div className="container mx-auto flex justify-between items-center">
      {/* Logo */}
      <h1 className="text-3xl font-semibold pl-4">
        <span className="text-accent">TTennis</span> PickupRobot.
      </h1>
      {/* Button */}
      <div className="flex items-center">
        <Button className="text-center text-3xl py-2 px-4 bg-accent rounded-2xl h-14">
          <div>撿球模式 Fetching Mode</div>
        </Button>
      </div>
    </div>
  </div>
);

const LiveStream = ({ onMapChange }) => {
  const [selectedMap, setSelectedMap] = useState('');

  const handleMapChange = (event) => {
    const selectedValue = event.target.value;
    setSelectedMap(selectedValue);
    onMapChange(selectedValue);
  };

  return (
    <div className="bg-gray-600 p-4 rounded-3xl flex-grow relative">
      <div className="justify-center text-center">
        <h1 className="text-2xl font-semibold text-white">Luxonis OAk-D YOLOv10</h1>
      </div>
      <div className="absolute top-4 right-10">
        <select 
          value={selectedMap} 
          onChange={handleMapChange} 
          className="bg-orange-200 text-violet-700 p-2 text-2xl rounded-2xl"
        >
          <option selected disabled value="">N/A</option>
          <option value="Map1">Map1</option>
          <option value="Map2">Map2</option>
          <option value="Map3">Map3</option>
        </select>
      </div>
    </div>
  );
};

const Fetching = () => {
  const [isStarted, setIsStarted] = useState(false);
  const [isButtonDisabled, setIsButtonDisabled] = useState(true);

  const handleStart = () => {
    setIsStarted(true);
  };

  const handleClosePopup = () => {
    setIsStarted(true);
  };

  const handleMapChange = (selectedValue) => {
    // Enable the button if a map is selected
    setIsButtonDisabled(selectedValue === "");
    if (selectedValue === 'Map1' || selectedValue === 'Map2' || selectedValue === 'Map3') {
      handleStart();
    }
  };

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
          {/* Left side contains LiveParameters and PageOperation */}
          <div className="w-[30%] flex flex-col gap-5">
            <LiveParameters />
            <PageButton 
              onStart={handleStart} 
              onClosePopup={handleClosePopup} 
              activeCircle={isStarted} 
              text="Start fetching ..."
            />
          </div>

          {/* Right side contains LiveStream */}
          <LiveStream onMapChange={handleMapChange} />
        </div>
      </motion.section>
    </div>
  );
};

export default Fetching;