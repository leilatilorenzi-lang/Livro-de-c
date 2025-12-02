#include <stdio.h>

int main() {

    int a, b, c;
    printf("digite o valor a: "); scanf("%d", &a);
    printf("digite o valor b: "); scanf("%d", &b);

    for(c = a; c <= b; c += 2) {
        printf("%d\n", c);
    }

    for(c = a; c <= b; scanf("%d", &c)) {
        printf("%d\n", c);
    }

    return 0;
}
