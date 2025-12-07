#include <stdio.h>

int main() {

    int total = 0;
    int v[] = {1, 2, -4, 3, -2, 1, 5, -5};
    
    for (int i = 0; i < 8; i++) {
        if (v[i] < 0) {
            printf("o numero %d é negativo\n", v[i]);
        }
        else {
            total += v[i];
        }
    }
    printf("o valor total é: %d\n", total);

    return 0;
}