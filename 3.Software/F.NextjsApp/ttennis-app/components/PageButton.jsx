// PageButton.jsx
import React, { useState } from 'react';
import { FaPlay, FaStop } from 'react-icons/fa';
import Link from 'next/link';

import { Button } from '@/components/ui/button';
import Popup from '@/components/Popup';

// PageButton 元件
// 接收 onStart, onClosePopup 和 activeCircle 作為 props
const PageButton = ({ onStart, onClosePopup, activeCircle, text }) => {
  const [isStarted, setIsStarted] = useState(false); // 控制按鈕是否已啟動
  const [showPopup, setShowPopup] = useState(false); // 控制是否顯示彈出視窗
  const [isButtonDisabled, setIsButtonDisabled] = useState(false); // 控制按鈕是否禁用

  const handleToggle = () => {
    // "按鈕禁用"或"未啟動"且沒有 activeCircle
    if (isButtonDisabled || (!isStarted && !activeCircle)) {
      console.log("Start Button Disabled !");
      return;
    }
    // 如果按鈕未啟動
    if (isStarted) {
      setShowPopup(false);
      onClosePopup();
      console.log("Stop Button Clicked !");
    } else {
      onStart();
      setShowPopup(true);
      setIsButtonDisabled(true);
      setTimeout(() => {
        setIsButtonDisabled(false);
      }, 2000);  // 設置 2 秒後解除"停止"按鈕禁用
      console.log("Start Button Clicked !");
    }
    setIsStarted(!isStarted);
  };

  // 處理關閉彈出視窗
  const handleClosePopup = () => {
    setShowPopup(false); // 隱藏彈出視窗
    setIsStarted(false); // 重置按鈕狀態
    onClosePopup(); // 調用 onClosePopup 回調
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
        onClick={isButtonDisabled || (!isStarted && !activeCircle) ? null : handleToggle}
        style={{ 
          backgroundColor: isStarted ? '#f43f5e' : '#00ff99',
          cursor: isButtonDisabled || (!isStarted && !activeCircle) ? 'not-allowed' : 'pointer',
          opacity: isButtonDisabled || (!isStarted && !activeCircle) ? 0.5 : 1
        }} 
        className="text-center rounded-2xl text-3xl h-20
        flex items-center transition-colors duration-300"
      >
        <div className="flex items-center">
          {isStarted ? <FaStop /> : <FaPlay />}
        </div>
        <div>{isStarted ? '停止' : '開始'}</div>
      </Button>

      <Popup 
        show={showPopup} 
        onClose={handleClosePopup} 
        text={text}
      />
    </div>
  );
};

export default PageButton;