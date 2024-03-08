#include <iostream>
 
using namespace std;
 
int main() {
    int L, V, maxVel;
    
    while (cin >> L) {
        cin >> V;
        maxVel = V;
        
        for (int vel = 1; vel < L; ++vel) {
            cin >> V;
            maxVel = max(maxVel, V);
        }
            
        if (maxVel < 10)
            cout << "1\n";
        else if (maxVel >= 10 && maxVel < 20)
            cout << "2\n";
        else
            cout << "3\n";
    }
 
    return 0;
}
