#include <stdio.h>

int main() {

    int idade, ano = 2025;
    printf("Digite sua idade: "); scanf("%d", &idade);
    printf("Você nasceu em: %d\n", ano-idade);

    return 0;
}