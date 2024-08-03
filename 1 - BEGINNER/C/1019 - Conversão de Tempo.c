#include <stdio.h>
 
int main() {
 
    int n, resto, horas, minutos, segundos;
    
    scanf("%d", &n);
    
    horas = n / 3600;
    resto = n % 3600;
    
    minutos = resto / 60;
    resto = resto % 60;
    
    segundos = resto;
    
    printf("%d:%d:%d\n", horas, minutos, segundos);
 
    return 0;
}