#include <iostream>
#include <array>
 
using namespace std;
 
int main() {
    int N, L;
    string str;
    cin >> N;
    
    for (int testCase = 0; testCase < N; ++testCase) {
        int hash = 0;
        cin >> L;
        
        for (int line = 0; line < L; ++line) {
            cin >> str;
            
            for (size_t index = 0; index < str.size(); ++index) {
                hash += (str.at(index) - 'A') + line + index;
            }
        }
        
        cout << hash << endl;
    }
 
    return 0;
}
