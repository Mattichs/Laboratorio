#include <iostream>
#include "Book.h"
#include <vector>

int main() {
    /* 
    // questo controlla solo la funzione ISBN
    if(controlISBN("111-222-333-X")) {
        std::cout << "ISBN valido" << std::endl;
    } else {
        std::cout << "ISBN non valido" << std::endl;
    } */
    std::vector<Book> shelf(10);
    shelf[5] = Book("David", "Foster Wallace","Una cosa divertente che non faro' mai piu'","887-521-937-4", Date(10,2,1999));
    
    std::cout << "Stato del libro prima del prestito: " << shelf[5].is_available() << std::endl;
    // test prestito
    shelf[5].take_book();
    if(shelf[5].is_available()) std::cout << "Libro non disponibile" << std::endl;
    else std::cout << "Libro disponibile" << std::endl ;
    
    std::cout << "Stato del libro dopo del prestito: " << shelf[5].is_available() << std::endl;

    // test restituzione
    shelf[5].return_book();
    if(shelf[5].is_available()) std::cout << "Libro non disponibile" << std::endl;
    else std::cout << "Libro disponibile" << std::endl;

    
    std::cout << shelf[5] << std::endl;
    Book my_favourite_book;
    try {
        my_favourite_book = Book("David", "Foster Wallace","Una cosa divertente che non faro' mai piu'","887-521-837-4", Date(10,2,2002));
        std::cout << my_favourite_book << std::endl;
    } catch (const char* e) {
        std::cout << e;
    }
    //std::cout << my_favourite_book.get_isbn();
    // test operatore ==
    if(shelf[5] == my_favourite_book) std::cout << "I due codici ISBN corrispondono";
    // test operatore !=
    if(shelf[5] != my_favourite_book) std::cout << "I due codici ISBN NON corrispondono";
    
    return 0;
}