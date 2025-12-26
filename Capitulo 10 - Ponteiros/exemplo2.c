#include <stdio.h>

int main() {

    int count = 10;
    int *p;
    p = &count;

    printf("Conteúdo apontando = %d\n", *p);
    *p = 12;
    printf("Conteúdo apontando = %d\n", *p);
    printf("Count = %d\n", count);
    

    return 0;
}