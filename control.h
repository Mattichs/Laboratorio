#include <iostream>
#include <string>
using namespace std;

// Bjarne Stroustroup scusa per questo codice orribile, potevo copiare da stack ma non lo ho fatto 

bool control(string str) {
    // ISBN lungo obbligatoriamente 17
    if(str.length() != 13) return false;
    //
    // tipo "111-222-333-X" X puo' essere lettera o numero
    
    string delimiter = "-";
    string s = ""; 
    for(int i = 0; i < 12; i+=4) {
        string substring = str.substr(i, str.find(delimiter));
        cout << "substring: " <<substring << endl;  
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