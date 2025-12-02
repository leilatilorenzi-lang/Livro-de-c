#include <stdio.h>

int main() {

    int x, y;

    printf("digite os numeros: "); scanf("%d", &x);
    printf("digite o segundo numeros: "); scanf("%d", &y);


    printf("%d\n", x|y);
    printf("%d\n", x^y);
    printf("%d\n", x&y);


    return 0;
}