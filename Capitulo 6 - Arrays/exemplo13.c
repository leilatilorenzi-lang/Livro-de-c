#include <stdio.h>

int main() {

    int i, lista[5] = {3, 51, 18, 2, 45};
    float soma = 0.0;

    for(i = 0; i < 5; i++) {
        soma += lista[i];
    }
    float media = soma / 5.0;
    printf("media = %f\n", media);

    return 0;
}
