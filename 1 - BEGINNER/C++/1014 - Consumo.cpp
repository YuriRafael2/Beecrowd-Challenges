#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int X;
    float Y, consumo_medio;
    
    cin >> X >> Y;
    
    consumo_medio = X / Y;
    
    cout << fixed << setprecision(3) << consumo_medio << " km/l" << endl;
    
    return 0;
}