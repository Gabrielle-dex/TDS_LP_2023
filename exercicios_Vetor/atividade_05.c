#include   <stdio.h>

int main(){
    int vetor[5];
    int vlrMaior, vlrMenor;
    int pMaior, pMenor;


    for(int i =0; i<5; i++){
        printf("\nDigite o valor da posicao: %d", i);
        scanf("%d",&vetor[i]);
    
    }
        pMaior = vetor[0];
        pMenor = vetor[0];

        for(int i =0; i<5; i++){
            if (vetor[i] > vlrMaior){
                vlrMaior = vetor[i];
                pMaior = i;
            }
            if (vetor [i] > vlrMenor){
                vlrMenor = vetor[i];
                pMenor = i;
            }
        
            printf("\n%d", vetor[i]);
        }
    printf("\n A posicao do vetor maior eh%d:", pMaior);
    printf("\n A posicao do vetor menor eh%d:", pMenor);
    
    return 0;

}