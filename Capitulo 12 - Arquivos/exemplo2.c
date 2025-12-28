#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fp;
    fp = fopen("exemplo.bin", "wb");

    if(fp == NULL) {
        printf("Erro na abertura do arquivo.\nFim do programa\n");
        exit(1);
    }

    fclose(fp);

    return 0;
}