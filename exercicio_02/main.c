#include <stdio.h>
int main () {
    
    // %s string
    // número fracionado
    float valor;
    valor = 3.5;

    //Mostrar um valor com dois parâmetros
    printf("O valor da varivael valor0 eh %f\n", valor);

    // 1 caracte '' simples
    char valor0;
    valor0 = 'A';

    //Mostrar um valor com dois parâmetros []
    printf("O valor da varivael valor eh %c\n", valor0);

    // Número inteiro
    int valor1 = 1;
    printf("O valor da variavel valor1 eh %d\n", valor1);

    // Número fracionado
    double valor2;
    valor2 = 4.00000;
    printf("O valor da variavel valor2 eh %f\n", valor2);

    /*            PRIMEIRO PROJETO               */
    // variavel
    int ValorDigitado=0;
    //Mensagem para o usuario pedindo valor
    printf("Ola mundo, digite um valor do tipo int: \n");
    // Escanear, armazenar a resposta
    scanf("%d", &ValorDigitado);
    //Mensagem com resposta para o usario
    printf("O valor digitado eh: %d", ValorDigitado);
    // Ele espera receber algo, por não ser void
    return 0;
}