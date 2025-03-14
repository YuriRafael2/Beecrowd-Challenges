#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    int numero, horas;
    float valor_hora, salario;
    
    cin >> numero >> horas >> valor_hora;
    
    salario = valor_hora * horas;
    
    cout << "NUMBER = " << numero << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario << endl;
 
    return 0;
}