#include <stdio.h>

int main() {

    int x, y;
    printf("Digite o primeiro numero: "); scanf("%d", &x);
    printf("Digite o deslocamento numero: "); scanf("%d", &y);

    printf("%d", x<<y);

    return 0;
}