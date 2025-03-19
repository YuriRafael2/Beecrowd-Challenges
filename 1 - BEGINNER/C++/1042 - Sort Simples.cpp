/*----------------------Solução mais simples e básica----------------------*/
#include <iostream>

using namespace std;
 
int main() {
 
    int x, y, z;
    
    cin >> x >> y >> z;
    
    if(x < y && x < z){
        
        cout << x << endl;
        
        if(y < z){
            
            cout << y << endl;
            cout << z << endl;
            
        } else{
            
            cout << z << endl;
            cout << y << endl;
            
        }
    } else if(z < x && z < y){
        
        cout << z << endl;
        
        if(x < y){
            
            cout << x << endl;
            cout << y << endl;
            
        } else{
            
            cout << y << endl;
            cout << x << endl;
            
        }
    } else{
        
        cout << y << endl;
        
        if(x < z){
            
            cout << x << endl;
            cout << z << endl;
            
        } else{
            
            cout << z << endl;
            cout << x << endl;
            
        }
    }
    
    cout << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
 
    return 0;
}

/*E também pode ser feita usando uma função com algorítmo bubble sort para ordenar o vetor e imprimi-lo*/

#include <iostream>

using namespace std;
 
void bubble_sort(int tamanho_vetor, int* vet){
    int i, fim;
    for(fim = tamanho_vetor-1; fim > 0; fim--){
        for(i = 0; i < fim; i++){
            if(vet[i] > vet[i+1]){
                int temp = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = temp;
            }
        }
    }
}

int main(){
    
    int tamanho_vetor = 3;
    int x, y, z;
    int vet_ordenado[3];
    
    cin >> x >> y >> z;
    
    vet_ordenado[0] = x;
    vet_ordenado[1] = y;
    vet_ordenado[2] = z;
    
    bubble_sort(tamanho_vetor, vet_ordenado);
    
    for(int i = 0; i < tamanho_vetor; i++){
        cout << vet_ordenado[i] << endl;
    }
    
    cout << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    
    return 0;
}