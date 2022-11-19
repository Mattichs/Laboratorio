#include <iostream>
#include <string>
#include "Date.h"
#include "DateControl.h"

       Date:: Date(int d, int m, int y){
            if(!myDateControl(d,m,y)){
                throw "invalid date!";
            }
            day=d;
            month=m;
            year=y;
        }
         int Date::getDay(){
            return day;
        }
         int Date::getMonth(){
            return month;
        }
        int Date::getYear(){
            return year;
        }
        std::ostream& operator<<(std::ostream& os, const Date& d){
            os << d.day << '/' << d.month << '/' << d.year;
            return os;
        }
    
