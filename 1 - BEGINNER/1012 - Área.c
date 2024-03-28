#include <stdio.h>
 
int main() {
 
    double a, b, c, triangulo, circulo, trapezio, quadrado, retangulo, pi = 3.14159;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    triangulo = a * c / 2.0; //A área do triângulo retângulo é dada pelo produto da sua base pela sua altura, tudo isso dividido por 2, já que ele é a metade de um retângulo com as mesmas dimensões de base e altura, ou seja: base * altura / 2
    circulo = pi * c * c; //A área do círculo é dada por pi = 3.14159... multiplicado pelo quadrado de seu raio, ou seja: pi * raio * raio
    trapezio = (a + b) * c / 2.0; //A área do trapézio é dada pela soma de sua base menor com sua base maior, multiplicada por sua altura, tudo isso dividido por 2, ou seja: [(base maior + base menor) * altura] / 2
    quadrado = b * b; //A área de um quadrado é dada pelo quadrado de seu lado, ou seja: lado * lado
    retangulo = a * b; //A área de um retângulo é dada pela multiplicação de seu lado por sua altura, ou seja: lado * altura
    //obs: caso tenha dificuldades em relação a isso, tente resolver após estudar mais sobre geometria plana.
    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);
 
    return 0;
}