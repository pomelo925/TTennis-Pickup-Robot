"use client";

import Link from 'next/link';
import { usePathname } from 'next/navigation';

const links = [
  {
    name: "Home", 
    path: "/",
  },
  {
    name: "Techs", 
    path: "/techs",
  },
  {
    name: "Developers", 
    path: "/developers",
  }
]

const Nav = () => {
  const pathname = usePathname();
  console.log(pathname);

  return(
    <nav className="flex gap-8">
      {links.map((link, index)=> {
        return (
          <Link 
            href={link.path} 
            key={index} 
            // Template Literal (模板字面量)
            // border-b-2: 設置元素的下邊框（bottom border）為 2px 寬。
            // border-accent: 設置邊框顏色為 accent。
            className={`${
              link.path === pathname && "text-accent border-b-2 border-accent"
            }`}
          > 
          {link.name}
          </Link>
        )
      })}
    </nav>
  );
}
export default Nav;
