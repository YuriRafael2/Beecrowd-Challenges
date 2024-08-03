#include <stdio.h>
 
int main() {
 
    int distancia, diferenca;
    
    scanf("%d", &distancia);
    
    /*
    No enunciado é dito que o carro Y consegue se distanciar 1km a cada 2 minutos do carro X, uma simples regra de três ajuda a resolver e visualizar essa situação
    Pegue como exemplo que o exercício quer saber quantos minutos um se distancia do outro em 30km, faremos assim

    1 km = 2 minutos
    30km = x minutos

    X = 30 * 2
    X = 60km  
    */

    diferenca = 2 * distancia;
    
    printf("%d minutos\n", diferenca);
 
    return 0;
}