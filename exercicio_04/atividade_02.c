#include <stdio.h>

int main()
{

    int myVector[8] = {5, 7, 14, 25, 99, 100, 73, 114};
    int x, y;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    printf("\n%d %d", myVector[x], myVector[y]);    
    printf("\n%d", myVector[x] + myVector[y]);    
}