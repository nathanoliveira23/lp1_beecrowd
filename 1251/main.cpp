#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
 
using namespace std;

typedef union {
    uint8_t ch;
    uint16_t charCode;
}
ASCIICODE;

int main() {
    string text;
    
    while (getline(cin, text)) {
        map<uint16_t, uint16_t> freq;
        ASCIICODE code;
        
        for (char character : text) {
            code.ch = character;
            freq[code.charCode]++;
        }
        
        vector<pair<uint16_t, uint16_t>> vet(freq.begin(), freq.end());
        
        sort(vet.begin(), vet.end(), [](const auto &a, const auto &b) {
            if (a.second == b.second)
                return a.first > b.first;
            return a.second < b.second; 
        });
        
        for (const auto &code : vet) {
            cout << code.first << " " << code.second << endl;
        }
        
        cout << endl;
    }
 
    return 0;
}
