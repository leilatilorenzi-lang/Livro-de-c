#include <stdio.h>

int main(void) {

    int n = 125;
    int largura = 10;

    printf("n = %10d\n", n);
    printf("n = %*d\n", largura, n);

    return 0;
}