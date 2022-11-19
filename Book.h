#include <iostream>
#include <string>
#include "controlISBN.h"

class Book {
    std::string ISBN; // tipo "111-222-333-444-X" X puo' essere lettera o numero
    std::string titolo;
    std::string nome;
    std::string cognome;
    //Date copiright;
    bool stato;
public: 
    std::string get_isbn();
    std::string get_titolo();
    std::string get_nome();
    std::string get_cognome();
    std::string get_date();
    std::string get_stato();
};
