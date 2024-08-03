import { motion, AnimatePresence } from "framer-motion";
import { useEffect } from 'react';

const Popup = ({ show, onClose, text }) => {
  useEffect(() => {
    if (show) {
      const timer = setTimeout(() => {
        onClose();
      }, 5000);
      return () => clearTimeout(timer);
    }
  }, [show, onClose]);

  return (
    <AnimatePresence>
      {show && (
        <motion.div
          initial={{ opacity: 0, scale: 0.5 }}
          animate={{ opacity: 1, scale: 1 }}
          exit={{ opacity: 0, scale: 0 }}
          transition={{ duration: 0.5 }}
          className="fixed bg-black bg-opacity-55 justify-center text-center rounded-2xl flex items-center"
          style={{
            width: '600px',
            height: '270px',
            top: `250px`,
            right: `55px`,
            transform: 'translate(50%, -50%)',
            zIndex: 1000
          }}
        >
          <div className="p-4 flex justify-center">
            {text.split(" ").map((word, wordIndex) => (
              <span key={wordIndex} className="flex">
                {word.split("").map((char, charIndex) => (
                  <motion.span
                    key={charIndex}
                    animate={{ y: [5, -5, 3] }}
                    transition={{ repeat: Infinity, duration: 1.5, delay: (wordIndex + charIndex) * 0.1 }}
                    className="text-4xl"
                  >
                    {char}
                  </motion.span>
                ))}
                {wordIndex < text.split(" ").length - 1 && <span className="text-4xl">&nbsp;</span>}
              </span>
            ))}
          </div>
        </motion.div>
      )}
    </AnimatePresence>
  );
};

export default Popup;