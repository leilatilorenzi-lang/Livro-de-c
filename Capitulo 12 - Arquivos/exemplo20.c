#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *arq;
    arq = fopen("Matrix.txt", "w");
    
    if(arq == NULL) {
        printf("Erro 404");
        exit(1);
    }
    int mat[2][2] = {{1, 2}, {3, 4}};
    int i, j;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            fprintf(arq, "%d\n", mat[i][j]);
        }
    }
    fclose(arq);

    return 0;
}