#include <iostream>
#include <string>
#include "controlISBN.h"

bool controlISBN(std::string str) {
    // ISBN lungo obbligatoriamente 17
    std::cout << "control";
    if(str.length() != 13) return false;
    //
    // tipo "111-222-333-X" X puo' essere lettera o numero
    
    std::string delimiter = "-";
    std::string s = ""; 
    for(int i = 0; i < 12; i+=4) {
        std::string substring = str.substr(i, str.find(delimiter));
        std::cout << "substring: " <<substring << std::endl;  
        s += substring;
    } 

    if(s.length() != 9) return false;

    for(int i = 0; i < s.length() - 1; i++) {
        if(!(isdigit(s[i]))) return false;
    }
    
    // controlla che sia alfanumerico o digit l'ultimo carattere
    if(!(isalnum(str[str.length() - 1]))) return false;
   
    return true;
}