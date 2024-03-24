#include <stdio.h>
 
int main() {
 
    double r, a, n = 3.14159;
    
    scanf("%lf", &r);
    
    a = n * r * r;
    
    printf("A=%.4lf\n", a);
 
    return 0;
}