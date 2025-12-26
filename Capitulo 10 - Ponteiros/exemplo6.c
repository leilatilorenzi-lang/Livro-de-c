#include <stdio.h>

int main() {

    int *p, x = 10;
    p = &x;
    printf("o conteúdo apontado por p: %d\n", *p);
    *p = *p + 1;
    printf("o conteúdo apontado por p: %d\n", *p);
    *p = *p * 10;
    printf("o conteúdo apontado por p: %d\n", *p);

    return 0;
}