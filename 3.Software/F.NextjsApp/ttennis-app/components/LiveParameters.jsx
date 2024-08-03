// components/LiveParameters.jsx
import React from 'react';

const parameters = [
  {
    label: "線速度",
    subLabel: "Linear vel",
    value: "226",
    unit: "cm/s"
  },
  {
    label: "旋轉速度",
    subLabel: "Rotate vel",
    value: "35",
    unit: "°/s"
  },
  {
    label: "桌球數量",
    subLabel: "# of balls",
    value: "97",
    unit: ""
  }
];

const LiveParameters = () => {
  return (
    <div className="bg-gray-600 p-4 rounded-3xl flex-grow">
      <div className="justify-center text-center">
        <div className="justify-center grid gap-6 mt-8">
          {parameters.map((param, index) => (
            <div key={index} className="grid grid-cols-2 items-center mr-12">
              <div className="text-left">
                <div className="text-2xl">{param.label}</div>
                <div className="text-1xl">{param.subLabel}</div>
              </div>
              <div className="flex items-center">
                <span className="mr-2 text-3xl">:</span>
                <span 
                  className="text-accent text-3xl" 
                  style={{ whiteSpace: 'nowrap' }}
                >
                  {param.value}
                </span>
                <span 
                  className="text-2xl ml-1" 
                  style={{ whiteSpace: 'nowrap', marginLeft: '0.8rem' }}
                >
                  {param.unit}
                </span>
              </div>
            </div>
          ))}
        </div>
      </div>
    </div>
  );
};

export default LiveParameters;