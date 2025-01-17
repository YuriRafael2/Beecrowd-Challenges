#include <stdio.h>
 
int main() {
 
    double A, B, C, area;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    if((A > B - C && A < B + C) && (B > A - C && B < A + C) && (C > B - A && C < B + A)){
        printf("Perimetro = %.1lf\n", A + B + C);
    } else{
        area = (A + B) * C / 2.0;
        printf("Area = %.1lf\n", area);
    }
    
    
    return 0;
}