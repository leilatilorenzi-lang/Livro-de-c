#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    FILE *arq;
    arq = fopen("exemplo.bin", "rb");
    if(arq == NULL) {
        printf("Não foi possível abrir o arquivo");
        exit(1);
    }

    int tamanho;
    fseek(arq, 0, SEEK_END);
    tamanho = ftell(arq);
    fclose(arq);
    printf("Tamanho do arquivo: %d Bytes", tamanho);

    return 0;
}