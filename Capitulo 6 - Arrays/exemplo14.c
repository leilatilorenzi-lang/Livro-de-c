#include <stdio.h>

int main() {

    int i, lista[5] = {3, 18, 2, 51, 45};
    int maior = lista[0];
    
    for(i = 1; i<5; i++) {
        if(maior < lista[i]) {
            maior= lista[i];
        }
    }
    printf("%d\n", maior);

    return 0;
}