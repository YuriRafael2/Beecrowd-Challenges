#include <iostream>
#include <iomanip>

using namespace std;

int main() {
 
    double area, raio;
    const double PI = 3.14159;
    
    cin >> raio;
    
    area = PI * raio * raio;

    cout << "A=" << fixed << setprecision(4) << area << endl;
    
    return 0;
}