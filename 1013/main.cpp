#include <iostream>
#include <array>
 
using namespace std;
 
constexpr int SIZE = 3;
 
int main() {
    array<int, SIZE> arr;
    int A, B, C, biggestNumber;
    
    cin >> A >> B >> C;
    
    arr[0] = A;
    arr[1] = B;
    arr[2] = C;
    
    biggestNumber = arr[0];
    
    for (size_t i = 0; i < arr.size(); i++) {
        if (i + 1 >= arr.size()) {
            break;
        }
        
        int biggestAB = (arr[i] + arr[i + 1] + abs(arr[i] - arr[i + 1])) / 2;
        
        if (biggestAB > biggestNumber) {
            biggestNumber = biggestAB;
        }        
    }
    
    cout << biggestNumber << " eh o maior\n";
 
    return 0;
}
