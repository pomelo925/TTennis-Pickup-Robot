"use client";

import CountUp from "react-countup";

const stats = [
  {
    num: 4,
    text: "Contributor"
  },
  {
    num: 172,
    text: "Code of commits"
  },
  {
    num: 356,
    text: "Days of development"
  },  
  {
    num: 82410,
    text: "Costing (NTD)"
  },
];


const Stats = () =>{
  return (
    <section className="pr-5">
      <div className="container mx-auto">
        <div className="flex">
          {stats.map((item, index) => {
            return (
              // flex-1: 彈性因子，表此 div 將會擴展來填充父容器中的剩餘空間。
              // 它將獲得父容器中的所有可用空間，與其他具有 flex 屬性和非零彈性因子的兄弟元素按比例分配。
              <div className="flex-1 flex gap-4 items-center justify-center" key={index}>
                <CountUp 
                  end={item.num} duration={3} delay={0.3} 
                  className="text-4xl font-extrabold"/>
                <p 
                  className={`${
                    item.text.length<18? "max-w-[100px]":"max-w-[150px]"
                  } leading-snug text-white/80`}
                > 
                  {item.text} 
                </p>
              </div>
            );
          })}
        </div>
      </div>
    </section>
  )
}

export default Stats;