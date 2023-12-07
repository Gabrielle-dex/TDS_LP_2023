#include <stdio.h>

int main()
{
    /*                      ATIVIDADE 1                 */
    // forma mais facil  int A[6]{1, 0, 5, -2, -5, 7};
    /* forma como pensei
   int A0 = [1];
   int B1 = [0];
   int C2 = [5];
   int D3 = [-2];
   int E4 = [-5];
   int F5 = [7]; */

    /*                   Algumas explicações                  */
    // int valores[5] = {3, 4, 6} é como se fosse {3, 4, 6, 0, 0}
    // int valores[] = {1, 8 ,6} sem o tamanho do vetor, o compilador ao iniciar faz a contagem
    // dos itens e determina o tamanho do vetor automaticamente.
    // Tipo NomedoVetor[quantidade_de_itens];
    // Inicia na posição 0
    // o que está certo

    int A[6];

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;
    // soma de vetores
    int totaldasoma = A[0] + A[1] + A[5];

    // modificando posição/subistitiu a antiga #erro
    A[4] = 100;

    // mostrar cada linha
    // variavel - Até quando se repetir - Somar ou diminuir
    //alt + shift + f (FORMATA CÓDIGO)

    for (int i =0; i < 6; i++)
    {
        // mostrar o valor, com parametro da variavel dentro do vetor
        printf("\n %d", A[i]);
    }
}