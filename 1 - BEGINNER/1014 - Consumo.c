#include <stdio.h>
 
int main() {
 
    int x;
    float y, consumo_medio;
    
    scanf("%d", &x);
    scanf("%f", &y);
    
    consumo_medio = x / y;
    
    printf("%.3f km/l\n", consumo_medio);
 
    return 0;
}