#include <stdio.h>

int main() {

    int vetor[4];
    int total = 0;

    for(int i = 0; i < 5; i++) {
        printf("Por favor digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5; i++) {
        total += vetor[i];
        printf("%d\n", vetor[i]);
    }
    
    printf("A média dos valores é: %d", total/5);

    return 0;
}