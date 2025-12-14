#include <stdio.h>

typedef int inteiro;

int main() {

    int x = 10;
    inteiro y = 20;
    y += x;

    printf("Soma = %d\n", y);

    return 0;
}