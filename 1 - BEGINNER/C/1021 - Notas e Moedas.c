#include <stdio.h>
#include <math.h>
 
int main() {
 
    double n, moeda;
    int cem, cinquenta, vinte, dez, cinco, dois, resto, moeda_um_real, moeda_cinquenta, moeda_vince_cinco, moeda_dez, moeda_cinco, moeda_um;
    
    scanf("%lf", &n);
    
    cem = n / 100;
    resto = (int)n % 100;
    
    cinquenta = resto / 50;
    resto = resto % 50;
    
    vinte = resto / 20;
    resto = resto % 20;
    
    dez = resto / 10;
    resto = resto % 10;
    
    cinco = resto / 5;
    resto = resto % 5;
    
    dois = resto / 2;

    moeda = n - ((cem * 100) + (cinquenta * 50) + (vinte * 20) + (dez * 10) + (cinco * 5) + (dois * 2));
    moeda = floor(moeda * 100);

    moeda_um_real = moeda / 100;
    resto = (int)moeda % 100;

    moeda_cinquenta = resto / 50;
    resto = resto % 50;

    moeda_vince_cinco = resto / 25;
    resto = resto % 25;

    moeda_dez = resto / 10;
    resto = resto % 10;

    moeda_cinco = resto / 5;
    resto = resto % 5;

    moeda_um = resto / 1;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda_um_real);
    printf("%d moeda(s) de R$ 0.50\n", moeda_cinquenta);
    printf("%d moeda(s) de R$ 0.25\n", moeda_vince_cinco);
    printf("%d moeda(s) de R$ 0.10\n", moeda_dez);
    printf("%d moeda(s) de R$ 0.05\n", moeda_cinco);
    printf("%d moeda(s) de R$ 0.01\n", moeda_um);
    
    return 0;
    
}