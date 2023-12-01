#include <stdio.h>

int main (){
    //Quantidade vetores seram é colocado no [] na variavel
    //Isso armazena e consome memória
    //Utilização de ponteiros de forma dinamina
    //Não pode colocar mais do que a memória
    char cores[3];

    // posição de cada vetor []
    cores[0] = 'A';
    cores[1] = 'B';
    cores[2] = 'C';
    printf("O valo da posicao 0 eh: %c\n, cores[0]");
    printf("Vetores:\n");
    /*              Forma de repetição              */

    /* Do - While */
    do{
        printf("Do while\n");
    } while( 0 == 1);

    /*   While    */
    while (0 == 1){
        printf("While\n");
    }
    /*  For   */
    // i++ valeu mesma coisa que i = i +1
    // variavel -percorre o vetor de cores ++
    for(int i = 0; i<=2; i +1){
        printf("O valor do i eh %d\n, i");
    }
    for( int i = 0; i < 4; i++){
        printf("O valor da cor da posicao %d eh %c \n", i, cores[i]);
    }

    /*  Index é forma de otimizar   */
    //Quantos usuarios deseja cadastrar, se for valor diferente ou um situação a mais que está na variavel
    // Ocorre problemas, dessa forma
    /* dado erro no index
    int index = 2;
    char alunos[index];

    alunos[0] = 'a';
    alunos[1] = 'b';

    printf("Valor de alunos poicao 0 eh: %c, alunos [0]");
    printf("Valorde alunos posicao 1 %c, alunos [1]"); */
    return 0;
}