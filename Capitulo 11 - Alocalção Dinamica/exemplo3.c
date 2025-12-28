#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int *p;
    p = (int *) malloc(5*sizeof(int));

    if(p == NULL) {
        printf("Erro: Memória Insuficiente\n");
        exit(1);
    }

    for(int i = 0; i < 5; i++) {
        printf("Digite o valor da posição [%d]: ", i);
        scanf("%d", &p[i]);
    }
    

    return 0;
}