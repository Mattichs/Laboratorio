#include <iostream>
#include <string>
#include "Date.h"
int main(){
   try{
      Date d(11,9,2001);
      std::cout<<d; 
   }catch(const char* e) {
      std::cout<<e;
      return -1;
   }
   
   return 0;
}