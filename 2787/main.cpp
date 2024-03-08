#include <iostream>
 
using namespace std;

inline bool isEven(int n) {
    return n % 2 == 0;
}
 
int main() {
    int L, C;
    cin >> L >> C;
    
    if (isEven(L + C))
        cout << "1\n";
    else
        cout << "0\n";
 
    return 0;
}
