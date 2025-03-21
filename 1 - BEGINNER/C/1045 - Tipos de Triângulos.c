#include <stdio.h>

void swap(float *A, float *B){
    float temp = *A;
    *A = *B;
    *B = temp;
}

void ordenar(float *A, float *B, float *C){
    
    if(*A < *B){
        swap(A, B);
    }
    
    if(*A < *C){
        swap(A, C);
    }
    
    if(*B < *C){
        swap(B, C);
    }
    
}

int main() {
 
    float A, B, C;
    
    scanf("%f %f %f", &A, &B, &C);
    
    ordenar(&A, &B, &C);
    
    if(A >= B + C){
        printf("NAO FORMA TRIANGULO\n");
    } else{

        if(A * A == B * B + C * C){
            printf("TRIANGULO RETANGULO\n");
        } else if(A * A > B * B + C * C){
            printf("TRIANGULO OBTUSANGULO\n");
        } else if(A * A < B * B + C * C){
            printf("TRIANGULO ACUTANGULO\n");
        }

        if(A == B && B == C){
            printf("TRIANGULO EQUILATERO\n");
        } else if(A == B || A == C || B == C){
            printf("TRIANGULO ISOSCELES\n");
        }

    }
 
    return 0;
}