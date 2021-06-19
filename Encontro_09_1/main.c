#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Digite um valor!\n");
    scanf("%d", &x);
    if(x > 0){
        y = x % 3;
        printf("O resto de %d e %d \n", x, y);
    }
    printf("Fim do programa \n");
}
