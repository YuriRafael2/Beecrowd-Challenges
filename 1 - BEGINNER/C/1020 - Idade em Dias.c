#include <stdio.h>
 
int main() {
 
    int dias_idade, resto, ano, mes, dia;
    
    scanf("%d", &dias_idade);
    
    ano = dias_idade / 365;
    resto = dias_idade % 365;
    
    mes = resto / 30;
    resto = resto % 30;
    
    dia = resto;
    
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
    
    return 0;
}