#include <stdio.h>
 
int main() {
 
    int peca_1, peca_2, qtd_peca_1, qtd_peca_2;
    float preco_peca_1, preco_peca_2, valor_total;
    
    scanf("%d %d %f", &peca_1, &qtd_peca_1, &preco_peca_1);
    scanf("%d %d %f", &peca_2, &qtd_peca_2, &preco_peca_2);
    
    valor_total = (qtd_peca_1 * preco_peca_1) + (qtd_peca_2 * preco_peca_2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", valor_total);
    
    return 0;
}