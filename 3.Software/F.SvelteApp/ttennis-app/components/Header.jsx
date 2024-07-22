import Link from 'next/link';
import { Button } from './ui/button';

// components 
import Nav from './Nav';

const Header = () => {
  return(
    <header className="py-8 xl:py-12 pr-8 text-white"> 
      <div className="container mx-auto flex justify-between items-center">
        {/* logo */}
        <Link href="/">
          <h1 className="text-2xl font-semibold pl-4">
            <span className="text-accent">TTennis</span>PickupRobot.
          </h1>
        </Link>

        {/* desktop nav */}
        <div className="flex items-center gap-8">
          <Nav />
          <Link href="/services">
            <Button> Services </Button>
          </Link>
        </div>

      </div>
    </header>
  );
};

export default Header;