#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *arq;
    arq = fopen("ArqGrav.txt", "rb");
    
    if(arq == NULL) {
        printf("Não foi possível abrir o arquivo\n");
        exit(1);
    }

    int i, totallido, v[5];
    totallido = fread(v, sizeof(int), 5, arq);
    
    if(totallido != 5) {
        printf("Erro ao ler o arquivo");
        exit(1);
    } 
    else {
        for(i = 0; i < 5; i++) {
            printf("v[%d] = %d\n", i, v[i]);
        }
    }


    return 0;
}