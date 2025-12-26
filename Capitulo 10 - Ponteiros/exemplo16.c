#include <stdio.h>

int main(void) {


    int x = 10;
    int *p = &x;
    int **p2 = &p;

    printf("Endereço em p2: %p\n", p2);
    printf("Conteudo em *p2: %p\n", *p2);
    printf("Conteúdo em **p2: %d\n", **p2);

    return 0;
}