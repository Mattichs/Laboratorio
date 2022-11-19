#include <iostream>
#include "Book.h"
#include <vector>

int main() {
    if(controlISBN("111-222-333-X")) {
        std::cout << "ISBN valido";
    } else {
        std::cout << "ISBN non valido";
    }
    std::vector<Book> shelf(10);
    Book my_favourite_book("David", "Foster Wallace","Una cosa divertente
che non farò mai più","887-521-837-4");
    
    return 0;
}