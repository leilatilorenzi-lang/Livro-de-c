#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char str[20];
    char *result;
    FILE *arq;
    arq = fopen("ArqGrav.txt", "r");

    if(arq == NULL) {
        printf("Problemas na Abertura do arquivo\n");
        exit(1);
    }
    result = fgets(str, 13, arq);
    
    if(result == NULL) {
        printf("Erro na Leitura\n");
    }
    else {
        printf("%s\n", str);
    }
    
    fclose(arq);

    return 0;
}