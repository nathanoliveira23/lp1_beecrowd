#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
 
using namespace std;

union CharASCII {
    char character;
    int asciiCode;
};

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.second == b.second)
        return a.first > b.first;
    
    return a.second < b.second;
}
 
int main() {
    string text;
    
    while (getline(cin, text)) {
        map<int, int> freq;
        CharASCII code;
        
        for (char ch : text) {
            code.character = ch;
            freq[code.asciiCode]++;
        }
        
        vector<pair<int, int>> vet(freq.begin(), freq.end());
        
        sort(vet.begin(), vet.end(), compare);
        
        for (const auto &code : vet) {
            cout << code.first << " " << code.second << '\n';
        }
        
        cout << '\n';
    }
 
    return 0;
}
