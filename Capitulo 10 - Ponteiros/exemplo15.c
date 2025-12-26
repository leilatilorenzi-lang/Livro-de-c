#include <stdio.h>

int main(void) {

    int *pvet[2];
    int x = 10, y[2] = {20 , 30};
    
    pvet[0] = &x;
    pvet[1] = y;

    printf("Endreço pvet[0]: %p\n", pvet[0]);
    printf("Endreço pvet[1]: %p\n", pvet[1]);

    printf("Conteúdo pvet[0]: %d\n", *pvet[0]);
    printf("Conteúdo pvet[1]: %d\n", *pvet[1]+1);
    
    printf("Conteúdo pvet[1][1]: %d\n", pvet[1][1]);


    return 0;
}