#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    const double PI = 3.14159;
    double A, B, C;
    
    cin >> A >> B >> C;
    
    cout << "TRIANGULO: " << fixed << setprecision(3) << A * C / 2.0 << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << PI * C * C << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << (A + B) * C / 2.0 << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << B * B << endl;
    cout << "RETANGULO: " <<fixed << setprecision(3) << A * B << endl;
    
    return 0;
}