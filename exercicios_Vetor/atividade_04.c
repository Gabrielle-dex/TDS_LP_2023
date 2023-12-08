#include   <stdio.h>

int main(){

    int vetor[10];
    int vlrMaior = 0;
    int vlrMenor = 0;

    for(int i =0; i<10; i++){
        printf("\nDigite o valor da posicao: %d",i);
        scanf("%d", &vetor[i]);
    

        // teste de maior e menor
        if (i == 0){
            vlrMenor = vetor[i];
            vlrMaior = vetor[i];
        }
        if(vetor[i] >vlrMaior){
            vlrMaior = vetor[i];
        }
        if(vetor[i]< vlrMenor){
            vlrMenor = vetor[i];
        }
    }
    // lista
        for(int i=0; i<10; i++){
            printf("\n %d\n", vetor[i]);
        }

    printf("\n O valor maior e: %d", vlrMaior);
    printf("\n O valor menor e: %d", vlrMenor);
 
 return 0;
}