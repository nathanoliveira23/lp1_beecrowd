#include <iostream>
#include <string>
#include <iomanip>
 
using namespace std;
 
int main() {
    string name;
    double salary, salesAmount;
    double totalSalary, commission;
    
    getline(cin, name);
    cin >> salary >> salesAmount;
    
    commission = salesAmount * 0.15;
    totalSalary = salary + commission;
    
    cout << "TOTAL = R$ "   << setprecision(2)
                            << fixed
                            << totalSalary
                            << endl;
 
    return 0;
}
