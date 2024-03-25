#include <stdio.h>
 
int main() {
 
    int a, b, c, maior, diferenca_absoluta;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a >= b){
        diferenca_absoluta = a - b;
    } else{
        diferenca_absoluta = b - a;
    }
     
    maior = (a + b + diferenca_absoluta) / 2;
    
    if(maior >= c){
        diferenca_absoluta = maior - c;
    } else{
        diferenca_absoluta = c - maior;
    }
    
    maior = (maior + c + diferenca_absoluta) / 2;
    
    printf("%d eh o maior\n", maior);
 
    return 0;
}