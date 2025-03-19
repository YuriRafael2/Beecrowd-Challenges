#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
 
    float A, B, C, perimetro, area;
    
    cin >> A >> B >> C;
    
    if((A < B+C && A > abs(B-C)) && (B < A+C && B > abs(A-C)) && (C < A+B && C > abs(A-B))){
        cout << "Perimetro = " << fixed << setprecision(1) << A + B + C << endl;
    } else{
        cout << "Area = " << fixed << setprecision(1) << (A + B) * C / 2.0 << endl;
    }
 
    return 0;
}