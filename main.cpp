#include <iostream>
#include "Book.h"

int main() {
    if(controlISBN("111-222-333-X")) {
        std::cout << "ISBN valido";
    } else {
        std::cout << "ISBN non valido";
    }
    
    return 0;
}