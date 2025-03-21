#include <iostream>
#include <cmath>

using namespace std;

void ordenar(float *A, float *B, float *C){
    
    if(*A < *B){
        swap(*A, *B);
    }
    
    if(*A < *C){
        swap(*A, *C);
    }
    
    if(*B < *C){
        swap(*B, *C);
    }
    
}

int main() {
 
    float A, B, C;
    
    cin >> A >> B >> C;
    
    ordenar(&A, &B, &C);
    
    if(A >= B + C){
        cout << "NAO FORMA TRIANGULO" << endl;
    } else{

        if(pow(A, 2) == pow(B, 2) + pow(C, 2)){
            cout << "TRIANGULO RETANGULO" << endl;
        } else if(pow(A, 2) > pow (B, 2) + pow(C, 2)){
            cout << "TRIANGULO OBTUSANGULO" << endl;
        } else if(pow(A, 2) < pow(B, 2) + pow(C, 2)){
            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        if(A == B && B == C){
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if(A == B || A == C || B == C){
            cout << "TRIANGULO ISOSCELES" << endl;
        }

    }
 
    return 0;
}