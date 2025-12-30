#include <stdio.h>
#define maior(x, y) x > y ? x : y

int main(void) {

    int a = 5;
    int b = 8;
    int c = maior(a, b);
    printf("O maior valor é: %d\n", c);

    return 0;
}