#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char str[] = "Hello World!";
    int result;
    FILE *arq;


    arq = fopen("ArqGrav.txt", "w");

    if(arq == NULL) {
        printf("Não foi possível abrir o arquivo\n");
        exit(1);
    }
    result = fputs(str, arq);
    
    if(result == EOF) {
        printf("Erro de gravação\n");        
    }
    fclose(arq);

    return 0;
}