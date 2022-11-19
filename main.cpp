#include <iostream>
#include "Book.h"

int main() {
    if(controlISBN("111-222-333-c")) {
        std::cout << "ISBN valido";
    } else {
        std::cout << "ISBN non valido (coglione)";
    }
    
    return 0;
}