#include <iostream>
#include "Book.h"

int main() {
    if(control("111-222-333-X")) {
        cout << "ISBN valido";
    } else {
        cout << "ISBN non valido (coglione)";
    }
    
    return 0;
}