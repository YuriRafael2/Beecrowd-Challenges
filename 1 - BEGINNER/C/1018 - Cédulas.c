#include <stdio.h>
 
int main() {
 
    int n, resto, cem, cinquenta, vinte, dez, cinco, dois, um;
    
    scanf("%d", &n);
    
    /*
    Faremos a divisão do valor total recebido (n) pelo valor de cada cédula, o resto representa o que sobrou da divisão inteira de "n" por cada cédula
    Por exemplo:
    cem = n / 100 (quantidade de cédulas de 100 é obtido pela divisão inteira de n por 100)
    resto dessa divisão, ou módulo, representa o que sobrou do valor original, "%" representa em C nos dá o resto dessa divisão, enquanto "/" nos dá o valor da divisão em um número int, já que dividiremos int por int
    */

    cem = n / 100;
    resto = n % 100;
    
    cinquenta = resto / 50;
    resto = resto % 50;
    
    vinte = resto / 20;
    resto = resto % 20;
    
    dez = resto / 10;
    resto = resto % 10;
    
    cinco = resto / 5;
    resto = resto % 5;
    
    dois = resto / 2;
    resto = resto % 2;
    
    um = resto;
    
    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);
    
    return 0;
}