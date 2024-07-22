import { Item } from '@radix-ui/react-roving-focus';
import Link from 'next/link'
import {FaGithub, FaInstagram, FaYoutube} from 'react-icons/fa'


const socials = [
  { icon: <FaGithub/>, path: "" },
  { icon: <FaInstagram/>, path: "" },
  { icon: <FaYoutube/>, path: "" }
];

const Socials = ({containerStyles, iconStyles}) => {
  return (
    <div className={containerStyles}>
      {socials.map((Item, index) => {
        return (
          <Link key={index} href={Item.path} className={iconStyles}>
            {Item.icon}
          </Link>
        );
      })}
    </div>
  );
};

export default Socials