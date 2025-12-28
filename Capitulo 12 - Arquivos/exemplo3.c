#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    FILE *arq;
    char string[100];
    arq = fopen("arquivo.txt", "w");

    puts("Digite uma String que deseja colocar no arquivo!");
    fgets(string, 100, stdin);
    
    if(arq == NULL) {
        printf("Erro na abertura de arquivo\n");
        exit(1);
    }
    for(int i = 0; i < strlen(string); i++) {
        fputc(string[i], arq);
    }
    fclose(arq);

    return 0;
}