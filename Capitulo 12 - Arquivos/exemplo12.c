#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *arq;
    arq = fopen("ArqGrav.txt", "wb");

    if(arq == NULL) {
        printf("Problema na criação do arquivo\n");
        exit(1);
    }
    
    int total_gravado, v[5] = {1, 2, 3, 4, 5};
    total_gravado = fwrite(v, sizeof(int), 5, arq);

    if(total_gravado != 5) {
        printf("erro na escrita do arquivo!");
        exit(1);
    }
    
    fclose(arq);

    
    return 0;
}