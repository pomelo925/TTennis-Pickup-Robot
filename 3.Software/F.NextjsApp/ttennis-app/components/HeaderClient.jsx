'use client';

import { usePathname } from 'next/navigation';
import Header from './Header';

// 不渲染 Header 之路徑
const excludedPaths = [
  '/services/mapping', 
  '/services/fetching',
  '/services/serving',
  '/services/pouring'
]; 

const HeaderClient = () => {
  const pathname = usePathname(); 
  const isInServicesPath = excludedPaths.some(path => pathname.startsWith(path));

  return !isInServicesPath ? <Header/> : null;
};

export default HeaderClient;
