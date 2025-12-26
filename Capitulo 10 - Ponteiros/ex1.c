#include <stdio.h>

int main(void) {

    int x = 10, y = 20;

    printf("Endreço de X: %p\n", &x);
    printf("Endreço de Y: %p\n", &y);

    &x > &y ? printf("Maior endereço é x\n") : printf("O maior endereço é y\n");
    
    return 0;
}
