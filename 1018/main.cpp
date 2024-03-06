#include <iostream>
 
using namespace std;

constexpr int SIZE = 7;

int main() {
    int banknotes[SIZE] = { 100, 50, 20, 10, 5, 2, 1 };
    int N, amount;
    
    cin >> N;
    cout << N << endl;
    
    for (size_t i = 0; i < SIZE; i++) {
        amount = N / banknotes[i];
        
        cout << amount << " nota(s) de R$ " << banknotes[i] << ",00\n";
        N %= banknotes[i];
    }
 
    return 0;
}
