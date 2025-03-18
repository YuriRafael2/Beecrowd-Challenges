#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    float n1, n2, n3, n4, media;
    
    cin >> n1 >> n2 >> n3 >> n4;
    
    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10.0;
    
    cout << "Media: " << fixed << setprecision(1) << media << endl;
    
    if(media >= 7.0){
        cout << "Aluno aprovado." << endl;
    } else if (media >= 5.0 && media <= 6.9){
        cout << "Aluno em exame." << endl;
        
        float exame;
        
        cin >> exame;
        
        cout << "Nota do exame: " << fixed << setprecision(1) << exame << endl;
        
        float media_final = (media + exame) / 2.0;
        
        if(media_final >= 5.0){
            cout << "Aluno aprovado." << endl;
        } else{
            cout << "Aluno reprovado." << endl;
        }
        
        cout << "Media final: " << fixed << setprecision(1) << media_final << endl;
        
    } else if(media < 5.0){
        cout << "Aluno reprovado." << endl;
    }
 
    return 0;
}