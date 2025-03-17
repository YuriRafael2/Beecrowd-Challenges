#include <iostream>

using namespace std;
 
int main() {
 
    int N, segundos, minutos, horas;
    
    cin >> N;
    
    horas = N / 3600;
    N %= 3600;
    minutos = N / 60;
    N %= 60;
    
    cout << horas << ":" << minutos << ":" << N << endl;
 
    return 0;
}