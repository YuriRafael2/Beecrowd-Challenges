#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    double A, B, C, MEDIA;
    
    cin >> A >> B >> C;
    
    MEDIA = (A * 2.0 + B * 3.0 + C * 5) / 10.0;
    
    cout << "MEDIA = " << fixed << setprecision(1) << MEDIA << endl; 
 
    return 0;
}