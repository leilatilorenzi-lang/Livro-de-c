#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *arq;
    arq = fopen("Exercicio 1.txt", "r");
    char ch;
    int linhas = 0;

    if(arq == NULL) {
        printf("Não foi possível Ler o arquivo\n");
        exit(1);
    }

    while ((ch = fgetc(arq)) != EOF) {
        if(ch == '\n') {
            linhas++;
        }
    }
    printf("Total de linhas: %d\n", linhas);
    
    return 0;
}