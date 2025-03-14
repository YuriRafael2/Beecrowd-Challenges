#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    
    int codigo_peca1, codigo_peca2, quantidade_peca1, quantidade_peca2;
    float valor_peca1, valor_peca2, total;
    
    cin >> codigo_peca1 >> quantidade_peca1 >> valor_peca1;
    cin >> codigo_peca2 >> quantidade_peca2 >> valor_peca2;
    
    total = quantidade_peca1 * valor_peca1 + quantidade_peca2 * valor_peca2;
    
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
    
    return 0;
}