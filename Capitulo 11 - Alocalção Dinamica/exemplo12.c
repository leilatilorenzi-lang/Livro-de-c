#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p;
    int i, j, Linhas = 2, Colunas = 2;
    p = (int *) malloc(Linhas*Colunas*sizeof(int));
    
    for(i = 0; i < Linhas; i++) {
        for(j = 0; j < Colunas; j++) {
            p[i*Colunas+j] = i+j;
        }
    }

    for(i = 0; i < Linhas; i++) {
        for(j = 0; j < Colunas; j++) {
            printf("%d\n", p[i*Colunas+j]);
        }
    }

    return 0;
}