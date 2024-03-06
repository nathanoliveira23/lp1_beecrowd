#include <iostream>
 
using namespace std;
 
int main() {
    int X, Y, result = 0;
    int min, max;
    cin >> X >> Y;
    
    max = X, min = Y;
    
    if (X == Y) {
        cout << 0 << endl;
        return 0;
    }
    
    if (X < Y) {
        max = Y;
        min = X;
    }
        
    for (int n = min + 1; n < max; n++) {
        if (n % 2 != 0) {
            result += n;
        }
    }
    
    cout << result << endl;
 
    return 0;
}
