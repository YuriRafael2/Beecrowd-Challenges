#include <stdio.h>
 
int main() {
 
    int horas, velocidade_media_hora;
    float litros;
    
    scanf("%d", &horas);
    scanf("%d", &velocidade_media_hora);
    
    litros = velocidade_media_hora * horas / 12.0;
    
    printf("%.3f\n", litros);
 
    return 0;
}