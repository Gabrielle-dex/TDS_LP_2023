/* Construir do 1 ao 9, no final calcular todos os resultados das tabuadas
 1x1 = 1
 1x2 = 2 no caso 3 somar tudo */

#include <stdio.h>

int main(){
    // vaiaveis e seus respectivos posicionamento
    int resultado[10];
    int g [0];
   /* resultado[0] = 1;
    resultado[1] = 2;
    resultado[2] = 3;
    resultado[3] = 4;
    resultado[4] = 5;
    resultado[5] = 6;
    resultado[6] = 7;
    resultado[7] = 8;
    resultado[8] = 9;
    resultado[9] = 10;  jeito que gera lixo de codigo*/
    
    //Para organizar caso for um código maior
        for(int i = 0; 1<=10; i++){
             resultado[i] = 0;
    
    // condição pra identificar qual tabuada
    // condição para contar do 1 até 9 contagem
    // condição de vetor dentro usando o valor

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("\n %d x %d = %d", i, j, (i * j));
       // pegar os resultados e somar         
                printf("\n O resultado de todas as tabuadas: %d + %d = %d", (i*j), (i*j), g);           
        }
        printf("\n- - - - - - - - - - - - - ");

    /* PRECISA TERMINAR*/
    }


    return 0;
}