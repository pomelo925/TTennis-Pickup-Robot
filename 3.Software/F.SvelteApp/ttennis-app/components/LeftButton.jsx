"use client"

// LeftButton.jsx
import { useSwiper } from "swiper/react";
import { PiCaretLeftBold } from "react-icons/pi";

const LeftButton = ({ containerStyles, btnStyles, iconsStyles }) => {
  const swiper = useSwiper();
  return (
    <button className={containerStyles} onClick={() => swiper.slidePrev()}>
      <PiCaretLeftBold className={iconsStyles} />
    </button>
  );
};

export default LeftButton;
