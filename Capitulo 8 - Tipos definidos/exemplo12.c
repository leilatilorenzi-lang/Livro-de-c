#include <stdio.h>

typedef unsigned int postivios[5];

int main() {
    
    int i;
    postivios v;

    for(i = 0; i < 5; i++) {
        printf("Digite o valor de v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("Valor de v[%d]: %d\n", i, v[i]);
    }

    return 0;
}