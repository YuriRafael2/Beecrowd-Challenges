#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b, c, raiz_um, raiz_dois, delta;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    delta = b * b - 4 * a * c;
    
    if(delta >= 0 && a > 0){
        
        raiz_um = (-b + sqrt(delta)) / (2 * a);
        raiz_dois = (-b - sqrt(delta)) / (2 * a);
        printf("R1 = %.5lf\n", raiz_um);
        printf("R2 = %.5lf\n", raiz_dois);
        
    } else{
        printf("Impossivel calcular\n");
    }

    return 0;
}