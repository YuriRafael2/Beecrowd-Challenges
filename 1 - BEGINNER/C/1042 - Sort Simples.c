/*----------------------Solução mais simples e básica----------------------*/
#include <stdio.h>
 
int main() {
 
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a < b && a < c){
        printf("%d\n", a);
        if(b < c){
            printf("%d\n", b);
            printf("%d\n", c);
        } else{
            printf("%d\n", c);
            printf("%d\n", b);
        }
    } else if(b < a && b < c){
        printf("%d\n", b);
        if(a < c){
            printf("%d\n", a);
            printf("%d\n", c);
        } else{
            printf("%d\n", c);
            printf("%d\n", a);
        }
    } else{
        printf("%d\n", c);
        if(a < b){
            printf("%d\n", a);
            printf("%d\n", b);
        } else{
            printf("%d\n", b);
            printf("%d\n", a);
        }
    }
    
    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);

    return 0;
}

/*E também pode ser feita usando uma função com algorítmo bubble sort para ordenar o vetor e imprimi-lo*/

#include <stdio.h>

void bubble_sort(int tamanho_vetor, int* vet){
    int i, fim;
    for(fim = tamanho_vetor-1; fim > 0; fim--){
        for(i = 0; i < fim; i++){
            if(vet[i] > vet[i+1]){
                int temp = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = temp;
            }
        }
    }
}

int main() {
    
    int tamanho_vetor = 3;
    int a, b, c;
    int vet_ordenado[3];
    
    scanf("%d %d %d", &a, &b, &c);
    
    vet_ordenado[0] = a;
    vet_ordenado[1] = b;
    vet_ordenado[2] = c;
    
    bubble_sort(tamanho_vetor, vet_ordenado);
    
    for(int i = 0; i < tamanho_vetor; i++){
        printf("%d\n", vet_ordenado[i]);
    }
    
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    
    return 0;
}