#include <stdio.h>

int main()
{
    // variavel para guardar o número que usuario digitar
   int numero, resultado;
    // solicitar ao usuario
    printf("Digite um número: \n");
    scanf("%d",&numero);
    if (numero <= 0){
        printf("Número invalido.\n");
    }else{
        //logaritmo, multiplicar ele mesmo
        resultado = numero * numero;
        printf("Seu resultado é: %d", resultado);
    }
    return 0;
}
