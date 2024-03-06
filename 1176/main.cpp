#include <iostream>
#include <unordered_map>
 
using namespace std;

static unordered_map<uint64_t, uint64_t> memo;
uint64_t fibonacci(uint64_t);
 
int main() {
    int T, N;
    cin >> T;
    
    for (size_t i = 0; i < T; ++i) {
        cin >> N;
        uint64_t fib = fibonacci(N);
        
        cout << "Fib(" << N << ") = " << fib << endl;
    }
 
    return 0;
}

uint64_t fibonacci(uint64_t n) {
    if (n == 0 || n == 1) return n;
    
    if (memo[n]) return memo[n];
    
    memo[n] = fibonacci(n - 2) + fibonacci(n - 1);
    
    return memo[n];
}
