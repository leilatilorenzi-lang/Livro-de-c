#include <stdio.h>

void troca(int *a,  int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("Dentro: %d e %d\n", *a, *b);
}

int main(void) {
    
    int x = 5;
    int y = 10;
    printf("antes da função: x = %d, y = %d\n", x, y);
    troca(&x, &y);
    printf("depois da função: x = %d, y = %d\n", x, y);
    
    return 0;
}