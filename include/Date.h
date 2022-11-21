#ifndef Dateh
#define Dateh
#include <iostream>
#include <string>

class Date{
    private:
    int day;
    int month;
    int year;
    public:
    Date();
    Date(int d, int m, int y);
    Date(const Date& d);
    int getDay();
    int getMonth();
    int getYear();
   friend std::ostream& operator<<(std::ostream& os, const Date& d);

};
std::ostream& operator<<(std::ostream& os, const Date& d);

#endif