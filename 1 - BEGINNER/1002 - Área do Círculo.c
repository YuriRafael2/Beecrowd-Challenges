#include <stdio.h>
 
int main() {
 
    double raio, area, pi = 3.14159;
    
    scanf("%lf", &raio);
    
    /*
    Considere:

        pi: 3.14159 (um número irracional que possui infinitas casas decimais, também pode ser escrita por 22/7 num cálculo)
        raio: obviamente o raio do círculo, ou seja, metade de seu diâmetro

    Sendo assim, a área do círculo é dada é: "A = pi * raio^2" ou então "A = pi * raio * raio"

    obs: caso tenha dificuldades em relação a isso, tente resolver após estudar mais sobre geometria plana.
    */
   
    area = pi * raio * raio;
    
    printf("A=%.4lf\n", area);
 
    return 0;
}