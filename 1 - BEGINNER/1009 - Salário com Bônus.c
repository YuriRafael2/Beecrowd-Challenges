#include <stdio.h>
 
int main() {
 
    char nome;
    double salario_fixo, total_vendas, salario_total;
    
    scanf("%s", &nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);
    
    salario_total = salario_fixo + (total_vendas * 0.15);
    
    printf("TOTAL = R$ %.2lf\n", salario_total);
    
    return 0;
}