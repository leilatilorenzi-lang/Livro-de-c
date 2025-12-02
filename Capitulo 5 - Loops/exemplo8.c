#include <stdio.h>

int main() {
    int i;

    do {
        printf("Escolha a opção\n");
        printf("Opção: 1\n");
        printf("Opção: 2\n");
        printf("Opção: 3\n");
        scanf("%d", &i);

    } while (i < 1 || i > 3 );
    printf("você escolheu a opção: %d\n", i); 
    

    return 0;
}