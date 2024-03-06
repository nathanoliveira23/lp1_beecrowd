#include <iostream>
#include <algorithm>
 
using namespace std;

int main() {
    int m, n;
    int minVal, maxVal, sum;
    
    while (true) {
        cin >> m >> n;
        
        if (m <= 0 || n <= 0) break;
        
        maxVal = max(m, n);
        minVal = min(m, n);
        
        sum = 0;
        for (int num = minVal; num <= maxVal; num++) {
            cout << num << " ";
            sum += num;
        }
        
        cout << "Sum=" << sum << endl;
    }
 
    return 0;
}
