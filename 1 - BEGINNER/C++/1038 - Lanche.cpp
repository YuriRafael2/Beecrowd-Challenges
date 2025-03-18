#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    int codigo, quantidade;
    
    cin >> codigo >> quantidade;
    
    switch(codigo){
        case 1:
            cout << "Total: R$ " << fixed << setprecision(2) << quantidade * 4.0 << endl;
        break;
        
        case 2:
            cout << "Total: R$ " << fixed << setprecision(2) << quantidade * 4.5 << endl;
        break;
        
        case 3:
            cout << "Total: R$ " << fixed << setprecision(2) << quantidade * 5.0 << endl;
        break;
        
        case 4:
            cout << "Total: R$ " << fixed << setprecision(2) << quantidade * 2.0 << endl;
        break;
        
        case 5:
            cout << "Total: R$ " << fixed << setprecision(2) << quantidade * 1.5 << endl;
        break;
    }
 
    return 0;
}