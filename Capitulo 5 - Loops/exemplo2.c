#include <stdio.h>

int main() {

    int a, b, c;
    printf("digite o valor de a: "); scanf("%d", &a);
    printf("digite o valor de b: "); scanf("%d", &b);

    for(c = a; c <= b; c++) {
        printf("%d\n", c);
    }
    return 0;
}