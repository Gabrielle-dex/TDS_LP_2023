#include   <stdio.h>

int main(){

    int Vetor[10];
    //Quantas tem
    int totalDepares = 0;

    for (int i=0; i<10; i++){
        printf("Digite o valor da posicao %d: \n", i);
        scanf("%d",&Vetor[i]);
    }

    for(int i=0; i<10; i++){
        // a variavel vetor na contagem determinada pelo i (%2) modal iniciar no 0
        if((Vetor[i] %2) == 0){
            totalDepares;
        }
    }
    printf("\n O total de pares eh: %d\n", totalDepares);
    // para simplificar é só jogar o if dentro do primeiro for

    return 0;

}