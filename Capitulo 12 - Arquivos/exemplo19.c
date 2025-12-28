#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *arq;
    arq = fopen("ArqGrav.txt", "r");
    char texto[20], nome[20];
    int i;
    float a;
    int result;

    if(arq == NULL) {
        printf("não foi possível abrir o arquivo");
        exit(1);
    }
    fscanf(arq, "%s%s", texto, nome);
    printf("%s %s\n", texto, nome);
    fscanf(arq, "%s %d", texto, &i);
    printf("%s %d\n", texto, i);
    fscanf(arq, "%s %f", texto, &a);
    printf("%s %f\n", texto, a);
    fclose(arq);

    return 0;
}