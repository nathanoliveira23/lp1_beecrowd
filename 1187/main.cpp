#include <iostream>
#include <iomanip>
 
using namespace std;

constexpr size_t SIZE = 12;
 
int main() {
    char op;
    double mat[SIZE][SIZE];
    double sum = 0, qnt = 0;
    
    cin >> op;
    
    for (size_t i = 0; i < SIZE; ++i) {
        for (size_t j = 0; j < SIZE; ++j) {
            double value;
            cin >> value;
            
            mat[i][j] = value;
        }
    }
    
    for (size_t i = 0; i < (SIZE / 2) - 1; ++i) {
        for (size_t j = 1 + i; j < SIZE - 1 - i; ++j) {
            sum += mat[i][j];
            qnt++;
        }
    }
    
    if (op == 'S') {
        cout << setprecision(1) << fixed << sum << endl;
    }
    else {
        double average = sum / qnt;
        
        cout << setprecision(1) << fixed << average << endl;
    }
    
    return 0;
}

