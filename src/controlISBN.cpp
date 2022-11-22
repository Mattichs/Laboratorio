#include <iostream>
#include <string>
#include "controlISBN.h"

// tipo "111-222-333-X" X puo' essere lettera o numero
/* 
    controllo che ISBN abbia 13 cifre, 
    poi divido in substring e le unisco senza i trattini,
    verifico che le tre substring siano 9 caratteri, poi con un altro for verifico che siano digit
    infine contreollo l'ultimo carattere che sia lettera o numero
*/
bool controlISBN(std::string str) {
    // ISBN lungo obbligatoriamente 13
    if(str.length() != 13) return false;
    
    std::string delimiter = "-";
    std::string s = ""; 
    for(int i = 0; i < 12; i+=4) {
        std::string substring = str.substr(i, str.find(delimiter));
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