#include <stdio.h>

int main() {

    int menor = 999, maior = 0;
    int x[] = {10, 11, 40, 30, 20, 5, 34, 12, 40, 70};

    for (int i = 0; i < 10; i++) {
        if (x[i] > maior) {
            maior = x[i];
        }
        else if (x[i] < menor) {
            menor = x[i];
        }    
    }

    printf("o maior valor é: %d\n", maior);
    printf("o menor valor é: %d\n", menor);
    

    return 0;
}