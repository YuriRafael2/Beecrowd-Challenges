#include <stdio.h>
 
int main() {
 
    char nome;
    double salario_fixo, total_vendas, salario_total;
    
    scanf("%s", &nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);
    
    /*
    Salário total do funcionário, deve ser seu salário fixo, somado a 15% do que ele vendeu no mês, ou seja, 0.15 * total_vendas é seu bônus
    */
   
    salario_total = salario_fixo + (total_vendas * 0.15);
    
    printf("TOTAL = R$ %.2lf\n", salario_total);
    
    return 0;
}