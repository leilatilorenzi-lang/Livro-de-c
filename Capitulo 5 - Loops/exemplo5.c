#include <stdio.h>

int main() {

    int a, b;
    printf("digite o valor a: "); scanf("%d", &a);
    printf("digite o valor b: "); scanf("%d", &b);

    for(; a <= b; a++) {
        printf("%d\n", a);
    }

    return 0;
}
