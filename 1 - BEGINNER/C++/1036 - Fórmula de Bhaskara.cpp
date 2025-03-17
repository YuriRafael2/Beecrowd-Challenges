#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
 
    double A, B, C, delta, R1, R2;
    
    cin >> A >> B >> C;
    
    delta = B * B - 4 * A * C;
    R1 = (-B + sqrt(delta)) / (2 * A);
    R2 = (-B - sqrt(delta)) / (2 * A);
    
    if(delta < 0 || A == 0){
        cout << "Impossivel calcular" << endl;
    } else{
        cout << "R1 = " << fixed << setprecision(5) << R1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << R2 << endl;
    }
 
    return 0;
}