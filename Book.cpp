#ifndef book_H
#define book_H

#include "Book.h"
#include <string>


std::string Book::get_isbn() const{
    return ISBN;
}
std::string Book::get_titolo() const{
    return titolo;
}
std::string Book::get_nome() const{
    return nome;
}
std::string Book::get_cognome() const{
    return cognome;
}
std::string Book::get_date() const{
    return "data";
}
bool Book::is_available() const{
    return stato;
}

void Book::return_book(){
    if(is_available()) std::cout << "Non puoi restituire un libro che risulta disponibile";

    else
        stato = true;
}

void Book::take_book(){
    if(!is_available()) std::cout << "Non puoi prendere un libro che non risulta disponibile";

    else
        stato = false;
}

bool operator==(const Book& b1, const Book& b2){
	return b1.get_isbn() == b2.get_isbn();
}

bool operator !=(const Book& b1, const Book& b2){
	return b1.get_isbn() != b2.get_isbn();
}

std::ostream& operator<<(std::ostream& os, const Book& b){
	return os << "Autore" << b.get_nome() << " " << b.get_cognome() << "\n" 
              << "Title : " << b.get_titolo() << "\n" 
              << "ISBN:" << b.get_isbn();
}

#endif