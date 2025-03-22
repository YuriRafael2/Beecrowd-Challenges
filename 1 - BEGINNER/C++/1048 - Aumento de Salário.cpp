#include <iostream>
#include <iomanip>

using namespace std;

int main() {
 
    float salario;
    int porcentagem;
    
    cin >> salario;
    
    if(salario >= 0.0 && salario <= 400.0){
        porcentagem = 15;
    } else if(salario > 400.0 && salario <= 800.0){
        porcentagem = 12;
    } else if(salario > 800.0 && salario <= 1200.0){
        porcentagem = 10;
    } else if(salario > 1200.0 && salario <= 2000.0){
        porcentagem = 7;
    } else{
        porcentagem = 4;
    }
    
    cout << "Novo salario: " << fixed << setprecision(2) << salario + salario * porcentagem / 100 << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << salario * porcentagem / 100 << endl;
    cout << "Em percentual: " << fixed << setprecision(2) << porcentagem << " %" << endl;
    
    return 0;
}