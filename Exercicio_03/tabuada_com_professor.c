#include <stdio.h>
int main(){
    int resultado[10];
    int totaldasoma = 0;
    /* Para organizar caso for um código maior
        for(int i = 0; 1<=10; i++){
             resultado[i] = 0;
    }*/
    /* O primeiro for é responsavel por criar o total de tabuadas
        O segundo for é resposavel por criar as tabuadas individuais */
    for(int i = 1; i<=10; i++){
       // printf("\n %d, i");
       resultado[i] = 0;
        for(int j = 1; j<=10; j++){
           // printf("\n %d, j");
            printf("\n %d X %d = %d", i, j, (i*j));
             // calcula total da tabuada
            resultado[i -1] = resultado[i-1] + (i*j);
           // calcula total de todas as tabuada
           totaldasoma = totaldasoma  + (i*j);
        }
        printf("\n - -Resultado da tabuada %d: (%d) ", i, resultado[i-1]);
    }
    printf("\n O total da soma das tabuadas: %d \n", totaldasoma);
    return 0;
}
/* se utilizar 11 posições fica sem os -1*/