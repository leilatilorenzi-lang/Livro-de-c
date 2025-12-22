#include <stdio.h>

int sqr(int a) {
    return (a*a);
}


int main() {

    int n1, n2;

    printf("Insira um número: ");
    scanf("%d", &n1);

    printf("Insira um número: ");
    scanf("%d", &n2);

    n1 = sqr(n1);
    n2 = sqr(n2);
    printf("N1: %d\nN2: %d\n", n1, n2);

    return 0;
}