#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    const double PI = 3.14159;
    double raio, volume;
    
    cin >> raio;
    
    volume = raio * raio * raio * PI * 4.0 / 3.0;
    
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
 
    return 0;
}