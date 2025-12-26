#include <stdio.h>

int main(void) {

    void *pp;
    int *p1, p2 = 10;
    p1 = &p2;
    pp = &p2;

    printf("O endereço de PP = %p\n", pp);
    pp = &p2;
    printf("O endereço de PP = %p\n", pp);
    pp = p1;
    printf("O endereço de PP = %p\n", pp);


    return 0;
}