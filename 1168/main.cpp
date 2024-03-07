#include <iostream>
#include <string>
#include <unordered_map>
 
using namespace std;

static unordered_map<char, int> leds = {
    { '0', 6 },
    { '1', 2 },
    { '2', 5 },
    { '3', 5 },
    { '4', 4 },
    { '5', 5 },
    { '6', 6 },
    { '7', 3 },
    { '8', 7 },
    { '9', 6 }
};
 
int main() {
    int N;
    string V;
    
    cin >> N;
    
    for (int caseTests = 0; caseTests < N; caseTests++) {
        int qnt = 0;
        cin >> V;
        
        for (const char &ch : V) {
            qnt += leds[ch];
        }
        
        cout << qnt << " leds\n";
    }
 
    return 0;
}
