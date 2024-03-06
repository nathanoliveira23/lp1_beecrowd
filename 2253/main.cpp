#include <iostream>
#include <cctype>
#include <regex>
 
using namespace std;
 
int main() {
    string passwd;
    size_t len;
    
    while (getline(cin, passwd)) {
        len = passwd.size();
        bool validPasswd = true, match;
        
        if (len < 6 || len > 32) {
            cout << "Senha invalida.\n";
            continue;
        }
        
        for (char ch : passwd) {
            if (isspace(ch) || ispunct(ch)) {
                cout << "Senha invalida.\n";
                validPasswd = false;
                break;
            }
        }
        
        match = regex_match(passwd, regex("^(?=.*[A-Z])(?=.*[a-z])(?=.*[0-9]).{8,}$"));
        
        if (validPasswd && match) {
            cout << "Senha valida.\n";
        }
        else {
            cout << "Senha invalida.\n";
        }
        
        passwd.clear();
    }
 
    return 0;
}
