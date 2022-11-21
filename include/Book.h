#include <iostream>
#include <string>
#include "controlISBN.h"
#include <ostream>

class Book {
    std::string ISBN; // tipo "111-222-333-444-X" X puo' essere lettera o numero
    std::string titolo;
    std::string nome;
    std::string cognome;
    //Date copiright;
    bool stato;
>>>>>>> main:Book.h
public: 
    std::string get_isbn() const;
    std::string get_titolo() const;
    std::string get_nome() const;
    std::string get_cognome() const;
    std::string get_date() const;
    bool is_available() const;
    void take_book();
    void return_book();
};

bool operator==(const Book& b1, const Book& b2);
bool operator!=(const Book& b1, const Book& b2);

std::ostream& operator<<(std::ostream& os, const Book& b);
