#include <stdio.h>

int main() {

    int n1, n2;
    printf("digite dois números"); scanf("%d%d", &n1, &n2);

    if(n1 > n2) {
        printf("%d e maior que %d\n", n1, n2);
    }
    else if(n1 == n2) {
        printf("%d e igual a %d\n", n1, n2);
    }
    else {
        printf("%d é menor que %d", n1, n2);
    }

    return 0;
}