#ifndef book_H
#define book_H

#include "Book.h"
#include <string>


std::string Book::get_isbn() {
    return ISBN;
}
std::string Book::get_titolo() {
    return titolo;
}
std::string Book::get_nome() {
    return nome;
}
std::string Book::get_cognome() {
    return cognome;
}
std::string Book::get_date() {
    return "data";
}
std::string Book::get_stato() {
    if(stato) return "libero";
    else return "prestato";
}

#endif