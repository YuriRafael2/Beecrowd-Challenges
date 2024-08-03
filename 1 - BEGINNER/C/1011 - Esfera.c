#include <stdio.h>
 
int main() {
 
    double raio, volume, pi = 3.14159;
    
    scanf("%lf", &raio);
    
    /*
    Considere:

        pi: 3.14159 (um número irracional que possui infinitas casas decimais, também pode ser escrita por 22/7 num cálculo)
        raio: obviamente o raio da esfera, ou seja, metade de seu diâmetro

    Sendo assim, o volume da esfera é dado por: "V = 4/3 * pi * raio^3" ou então "A = 4/3 pi * raio * raio * raio"
    
    obs: caso tenha dificuldades em relação a isso, tente resolver após estudar mais sobre geometria espacial.
    */

    volume = (4/3.0) * raio * raio * raio * pi;
    
    printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}