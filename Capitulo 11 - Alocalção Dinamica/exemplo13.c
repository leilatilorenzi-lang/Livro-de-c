#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int *p;
    int i, j;
    int linhas = 3, colunas = 3;

    p = (int *) malloc(linhas*colunas*sizeof(int));
    
    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            p[i*colunas+j] = i+j;
        }
    }
    
    for(i = 0; i < linhas; i++) {
        for(j = 0; j < colunas; j++) {
            printf("%d\n", p[i*colunas+j]);
        }
    }

    free(p);
    return 0;
}