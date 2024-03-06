#include <iostream>
 
using namespace std;
 
int main() {
    int T, PA, PB;
    double G1, G2;
    
    cin >> T;
    
    for (int i = 0; i < T; ++i) {
        int years = 0;
        bool isCentury = false;
        
        cin >> PA >> PB >> G1 >> G2;
        
        while (PA <= PB) {
            years++;
            
            PA += (PA * G1) / 100;
            PB += (PB * G2) / 100;
            
            if (years > 100) {
                cout << "Mais de 1 seculo.\n";
                isCentury = true;
                break;
            }
        }
        
        if (!isCentury) {
            cout << years << " anos.\n";
        }
    }
 
    return 0;
}
