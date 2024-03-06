#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double A, B, studentAverage;
    cin >> A >> B;
    
    studentAverage = (A * 3.5 + B * 7.5) / 11.0;
    
    cout << "MEDIA = "  << setprecision(5)
                        << fixed
                        << studentAverage
                        << endl;
 
    return 0;
}
