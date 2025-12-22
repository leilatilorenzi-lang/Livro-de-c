#include <stdio.h>

void add1(int *num) {
    *num = *num + 1;
    printf("O valor dentro da função é: %d\n", *num);
}

int main(void) {

    int n = 5;
    printf("O valor de n = %d\n", n);
    add1(&n);
    printf("valor depois da função é: %d\n", n);


    return 0;
}