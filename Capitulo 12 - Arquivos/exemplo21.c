#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *arq;
    arq = fopen("Matrix.txt", "r");

    if(arq == NULL) {
        printf("Não foi possível abrir o arquivo");
        exit(1);
    }
    int v, soma = 0;
    
    while(!feof(arq)) {
        fscanf(arq, "%d", &v);
        soma += v;
    }
    printf("Soma = %d\n", soma);
    fclose(arq);

    return 0;
}