#include <stdio.h>
 
int main() {
 
    int x;
    float y, consumo_medio;
    
    scanf("%d", &x);
    scanf("%f", &y);
    
    /*
    O exercício pede o consumo feito pelo automóvel em km/l, ou seja, quantos quilômetros (X) se faz a cada um litro (1L) gasto de combustível, uma simples regra de três ajuda a visualizar isso
    Considere o exemplo: distância = 500km e combustível = 35L
     X km = 1L
    500km = 35L
    */
    
    consumo_medio = x / y;
    
    printf("%.3f km/l\n", consumo_medio);
 
    return 0;
}