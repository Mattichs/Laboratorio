#ifndef book_H
#define book_H
#include "Book.h"
#include <string>
#include "controlISBN.h"

Book::Book(){
    ISBN="111-111-111-1";
    titolo="book";
    nome="name";
    cognome="surname";
    copyright=Date();
    stato=false;
}
Book::Book(std::string n,std::string c,std::string t,std::string isbn, const Date& copy){
    if(!controlISBN(isbn)){
        throw "invalid isbn!";
    }
    ISBN=isbn;
    titolo=t;
    nome=n;
    cognome=c;
    copyright=Date(copy);
    stato=false;
}
Book::Book(std::string n,std::string c,std::string t,std::string isbn){
    if(!controlISBN(isbn)){
        throw "invalid isbn!";
    }
    ISBN=isbn;
    titolo=t;
    nome=n;
    cognome=c;
    copyright=Date();
    stato=false;
}
Book:: Book(const Book& b){
    this->ISBN=b.ISBN;
    this->titolo=b.titolo;
    this->nome=b.nome;
    this->cognome=b.cognome;
    this->copyright=Date(b.copyright);
    this->stato=b.stato; 
}
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
Date Book::get_copyright() const{
    return copyright;
}
bool Book::is_available() const{
    return stato;
}

void Book::return_book(){

    if(!is_available()) throw "Non puoi restituire un libro che risulta disponibile" ;
    else stato = false;

}

void Book::take_book(){
    if(is_available()) throw "Non puoi prendere un libro che non risulta disponibile" ;
    else stato = true;
}

bool operator==(const Book& b1, const Book& b2){
	return b1.get_isbn() == b2.get_isbn();
}

bool operator !=(const Book& b1, const Book& b2){
	return b1.get_isbn() != b2.get_isbn();
}

std::ostream& operator<<(std::ostream& os, const Book& b){
	return os   << "Titolo : " << b.get_titolo() << "\n" 
                << "Autore : " << b.get_nome() << " " << b.get_cognome() << "\n" 
                << "Copyright : " << b.get_copyright() << "\n" 
                << "ISBN:" << b.get_isbn();
}
#endif