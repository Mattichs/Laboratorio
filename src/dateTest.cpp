#include <iostream>
#include <string>
#include "Date.h"

// classe per testare date (non viene compilata con cmake)
int main(){
   std::cout<<0;
   try{
      Date d(11,9,2001);
      std::cout<<d; 
   }catch(const char* e) {
      std::cout<<e;
      return -1;
   }
     try{
      Date d(31,6,2004);
      std::cout<<d; 
   }catch(const char* e) {
      std::cout<<e;
      return -1;
   }
   
   return 0;
}