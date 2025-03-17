#include <iostream>
#include <iomanip>

using namespace std;

int main() {
 
    int tempo, velocidade_media;
    float litros;
    
    cin >> tempo >> velocidade_media;
    
    litros = tempo * velocidade_media / 12.0;
    
    cout << fixed << setprecision(3) << litros << endl;
    
    return 0;
}