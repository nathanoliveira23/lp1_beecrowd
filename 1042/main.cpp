#include <iostream>
#include <array>
#include <algorithm>
 
using namespace std;

constexpr int SIZE = 3;

void fill(array<int, SIZE>&, array<int, SIZE>&);
inline void printArr(const array<int, SIZE>&);

int main() {
    array<int, SIZE> originalArr, sortedArr;
    fill(originalArr, sortedArr);
    
    sort(sortedArr.begin(), sortedArr.end());
    
    printArr(sortedArr);
    cout << endl;
    printArr(originalArr);
 
    return 0;
}

void fill(array<int, SIZE> &arrA, array<int, SIZE> &arrB) {
    for (size_t i = 0; i < SIZE; i++) {
        int number;
        cin >> number;
        
        arrA[i] = arrB[i] = number;
    }
}

inline void printArr(const array<int, SIZE> &arr) {
    for (size_t i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }
}
