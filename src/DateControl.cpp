#include "DateControl.h"
bool myDateControl(int d, int m, int y){
    if(y >= 0) {
        if(m>0&&m<13){
            if(m==4||m==6||m==9||m==11){
                if(d>0&&d<31)
                    return true;
                else
                    return false;
            }//mesi con 30 giorni
            if(m==2){
                if(y%4==0||y%400==0){
                    if(d>0&&d<30)
                        return true;
                    else
                        return false;
                }
                else if (d>0&&d<29){
                    return true;
                }else{
                    return false;
                }
            }//febbraio e anni bisestili
            else{
            if(d>0&&d<32)
                    return true;
            }//mesi con 31 giorni
        }  
    }
    return false;  
};