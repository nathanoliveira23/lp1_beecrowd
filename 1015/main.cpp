#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;

typedef struct {
    float x, y;
}
COORD;

int main() {
    COORD firstPoint, secPoint;
    float distance, diffX, diffY;
    
    cin >> firstPoint.x >> firstPoint.y;
    cin >> secPoint.x >> secPoint.y;
    
    diffX = pow(secPoint.x - firstPoint.x, 2);
    diffY = pow(secPoint.y - firstPoint.y, 2);
    
    distance = sqrt(diffX + diffY);
    
    cout << setprecision(4) << fixed << distance << endl;
 
    return 0;
}
