#include <iostream>
#include <array>
#include <algorithm>
 
using namespace std;
 
constexpr size_t SIZE = 20;

inline void fill(array<int, SIZE>&);
inline void print(const array<int, SIZE>&);

int main() {
    array<int, SIZE> N;
    fill(N);
    
    for (size_t i = 0; i < SIZE / 2; ++i) {
        swap(N[i], N[SIZE - 1 - i]);
    }
    
    print(N);
 
    return 0;
}

inline void fill(array<int, SIZE> &arr) {
    for (size_t i = 0; i < SIZE; ++i) {
        int value;
        cin >> value;
        
        arr[i] = value;
    }
}
inline void print(const array<int, SIZE> &arr) {
    for (size_t i = 0; i < SIZE; ++i) {
        cout << "N[" << i << "] = " << arr[i] << endl;
    }
}
