import { Button } from "@/components/ui/button";
import { FiDownload } from "react-icons/fi";

// components
import Socials from "@/components/Socials";
import Photo from "@/components/Photo";
import Stats from "@/components/Stats";

const Home = () => {
  return (
    <section className="h-full">
      <div className="container mx-auto max-h-[380px]">
        <div className="flex flex-row justify-between items-center pb-28 pl-6 pr-6">   
          {/* text */}
          <div className="text-left order-none ">
            <span className="text-[16pt] text-yellow-200/90"> PME25 Graduation Project</span>
          
            <h1 className="h1"> Hello World!<br/> 
              <span className="text-accent"> Let's Gather!</span>
            </h1>

            <br/>
            <p className="mb-9 text-white text-[14pt]"> 
              An AMR for fetching & serving Table Tennis ball.
            </p>

            {/* buttons & socials  */}
            <div className="flex flex-row items-center gap-8">
              <Button
                variant="outline"
                className="uppercase flex items-center gap-2"
              >
                <span> Doc. </span>
                <FiDownload className="text-2xl" />
              </Button>
              <div> 
                <Socials containerStyles="flex gap-4" iconStyles="w-12 h-12 
                border border-accent rounded-full flex justify-center items-center
                text-accent text-base hover:bg-accent hover:text-primary 
                hover:transition-all duration-600" /> </div>
            </div>
          </div>

          {/* photo */}  
          <div className="order-1 pr-10 mb-8"> <Photo/> </div>
          
        </div>
      </div>
      {/* stats */}
      <Stats />
    </section>
  );
}


export default Home;