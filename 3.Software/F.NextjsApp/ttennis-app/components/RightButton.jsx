"use client";

// RightButton.jsx
import { useSwiper } from "swiper/react";
import { PiCaretRightBold } from "react-icons/pi";

const RightButton = ({ containerStyles, btnStyles, iconsStyles }) => {
  const swiper = useSwiper();
  return (
    <button className={containerStyles} onClick={() => swiper.slideNext()}>
      <PiCaretRightBold className={iconsStyles} />
    </button>
  );
};

export default RightButton;
