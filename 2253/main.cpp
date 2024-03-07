#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string passwd;
    
    while (getline(cin, passwd)) {
        size_t len = passwd.size();
        bool digit, lower, upper;
        bool valid = true;
        
        digit = lower = upper = false;
        
        if (len < 6 or len > 32) {
            cout << "Senha invalida.\n";
            continue;
        }
        
        for (const char &ch : passwd) {
            if (isdigit(ch)) {
                digit = true;
            }
            else if (islower(ch)) {
                lower = true;
            }
            else if (isupper(ch)) {
                upper = true;
            }
            else {
                valid = false;
                break;
            }
        }
        
        if (lower and upper and digit and valid)
            cout << "Senha valida.\n";
        else
            cout << "Senha invalida.\n";
    }
 
    return 0;
}
