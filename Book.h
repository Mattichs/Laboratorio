#include <iostream>
#include <string>
#include "controlISBN.h"
#include <ostream>
#include "Date.h"

class Book {
    std::string ISBN; // tipo "111-222-333-444-X" X puo' essere lettera o numero
    std::string titolo;
    std::string nome;
    std::string cognome;
    Date copyright;
    bool stato;
public: 
    Book();
    // costruttore nome, cognome, titolo, ISBN, date
    Book(std::string n,std::string c,std::string t,std::string isbn,const Date& copy);
    Book(std::string n,std::string c,std::string t,std::string isbn);
    Book(const Book& b);
    std::string get_isbn() const;
    std::string get_titolo() const;
    std::string get_nome() const;
    std::string get_cognome() const;
    Date get_copyright() const;
    bool is_available() const;
    void take_book();
    void return_book();
};

bool operator==(const Book& b1, const Book& b2);
bool operator!=(const Book& b1, const Book& b2);

std::ostream& operator<<(std::ostream& os, const Book& b);
