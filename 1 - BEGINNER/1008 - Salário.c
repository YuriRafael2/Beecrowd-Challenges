#include <stdio.h>
 
int main() {
 
    int numero_empregado, horas_trabalho;
    float salario_por_hora, salario;
    
    scanf("%d", &numero_empregado);
    scanf("%d", &horas_trabalho);
    scanf("%f", &salario_por_hora);
    
    salario = horas_trabalho * salario_por_hora;
    
    printf("NUMBER = %d\n", numero_empregado);
    printf("SALARY = U$ %.2f\n", salario);
    
    return 0;
}