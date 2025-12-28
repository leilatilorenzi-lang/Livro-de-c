#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *arq;
    char nome[] = "Ricardo";
    int i = 30;
    float a = 1.74;
    int result;
    
    arq = fopen("ArqGrav.txt", "w");
    if(arq == NULL) {
        printf("Não foi possível abrir o arquivo\n");
        exit(1);
    }
    result = fprintf(arq, "Nome: %s\nIdade: %d\nAltura: %f\n", nome, i, a);
    
    if(result < 0) {
        printf("Erro na escrita");
    }
    fclose(arq);

    return 0;
}