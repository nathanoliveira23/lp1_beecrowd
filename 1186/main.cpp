#include <iostream>
#include <iomanip>
 
using namespace std;

constexpr size_t SIZE = 12;
 
int main() {
    char op;
    float mat[SIZE][SIZE];
    
    cin >> op;
    
    for (size_t i = 0; i < SIZE; ++i) {
        for (size_t j = 0; j < SIZE; ++j) {
            float value;
            cin >> value;
            
            mat[i][j] = value;
        }
    }
    
    if (op == 'S') {
        float sum = 0.0F;
        
        for (size_t i = 1; i < SIZE; ++i) {
            for (size_t j = SIZE - 1; j > SIZE - 1 - i; --j) {
                sum += mat[i][j];
            }
        }
        
        cout << setprecision(1) << fixed << sum << endl;
    }
    else if (op == 'M') {
        float sum = 0.0F, average;
        int qnt = 0;
        
        for (size_t i = 1; i < SIZE; ++i) {
            for (size_t j = SIZE - 1; j > SIZE - 1 - i; --j) {
                sum += mat[i][j];
                qnt++;
            }
        }
        
        average = sum / static_cast<float>(qnt);
        
        cout << setprecision(1) << fixed << average << endl;
    }
    
 
    return 0;
}
