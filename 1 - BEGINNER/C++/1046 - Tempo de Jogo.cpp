#include <iostream>

using namespace std;

int main() {
 
    int hora_ini, hora_fim;
    
    cin >> hora_ini >> hora_fim;
    
    if(hora_fim <= hora_ini){
        hora_fim += 24;
    } 
    
    cout << "O JOGO DUROU " << hora_fim - hora_ini << " HORA(S)" << endl;
    
    return 0;
}