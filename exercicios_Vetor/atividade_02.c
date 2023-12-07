#include <stdio.h>

int main()
{
    //Quando você pede pro usuario digital um número vai ser entre estes número[0-8], independe do que está dentro dessa posição
    //mas o valor que está dentro está aleatorio
    // declarar inicia no 1, contagem de posição começa no 0
    int myVector[8] = {5, 7, 14, 25, 99, 100, 73, 114};
    int x, y;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    printf("\n%d %d", myVector[x], myVector[y]);    
    // soma
    printf("\n%d", myVector[x] + myVector[y]);    
}

                        /*               Outra forma de resolver            */
    /* int main(){
        int myVetor[8];

        int i = 0;
        while(i<8){
           Printf("Digite o valor da posição %d: ", i);
           scanf("%d", &myVetor[i]);
           i++;
        }

        int x, y;
         printf("\n Digite o valor de X: ");
         scanf(%d, &x);
         printf("\n Digite o valor de y: ");
         scanf("%d",&y);

        for(int = 0; i<8; i++){
            printf("\n O valor da posicao %d eh: %d", i, myVetor[i])
           // printf("A soma do x (%d) e do y(%d) e: %d ", x, y,(x+y));
        }

        int somaDosvetores = myVetor[x] + myVetor[y];
        printf("\n A soma da posicao %d e %d eh: \n", x, y, somaDosvetores);
        
            return 0;
    }
    // quantidade de tipos % vai ser quantidade de parametros que vai poder por no final "", i, ...
    // Printf("\n %d %d", i, y);
    */