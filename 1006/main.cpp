#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double A, B, C, studentAverage;
    cin >> A >> B >> C;
    
    studentAverage = (A * 2 + B * 3 + C * 5) / 10.0;
    
    cout << "MEDIA = "  << setprecision(1)
                        << fixed
                        << studentAverage
                        << endl;
 
    return 0;
}
