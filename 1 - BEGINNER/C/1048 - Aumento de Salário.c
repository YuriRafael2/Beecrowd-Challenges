#include <stdio.h>
 
int main() {
 
    float salario;
    int porcentagem;
    
    scanf("%f", &salario);
    
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
    
    printf("Novo salario: %.2f\n", salario + salario * porcentagem / 100);
    printf("Reajuste ganho: %.2f\n", salario * porcentagem / 100);
    printf("Em percentual: %d %%\n", porcentagem);
    
    return 0;
}