#include <stdio.h>
 
int main() {
 
    float n1, n2, n3, n4, media, media_final, exame;
    
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10.0;
    
    printf("Media: %.1f\n", media);
    
    if(media >= 5.0 && media < 7.0){
        
        printf("Aluno em exame.\n");
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);
        media_final = (media + exame) / 2.0;
        
        if(media_final >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media_final);
        } else{
            printf("Aluno reprovado.\n");
        }
        
    } else if(media <= 5){
        printf("Aluno reprovado.\n");
    } else if(media >= 7){
        printf("Aluno aprovado.\n");
    }
 
    return 0;
}