#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    FILE *arq;
    char str[100];
    int i;
    arq = fopen("arquivo.txt", "w");
    
    if(arq == NULL) {
        printf("Não foi possível abrir o arquivo!");
        exit(1);
    }
    printf("Entre com a String a ser gravada no arquivo: ");
    fgets(str, 100, stdin);

    for(i = 0; i < strlen(str); i++) {
        fputc(str[i], arq);
    }

    fflush(arq);
    fclose(arq);

    return 0;
}