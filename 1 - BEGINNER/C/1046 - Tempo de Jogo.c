#include <stdio.h>

int main() {
 
    int hora_ini, hora_fim;
    
    scanf("%d %d", &hora_ini, &hora_fim);
    
    if(hora_fim <= hora_ini){
        hora_fim += 24;
    } 

    printf("O JOGO DUROU %d HORA(S)\n", hora_fim - hora_ini);
    
    return 0;
}