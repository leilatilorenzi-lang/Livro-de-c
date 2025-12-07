#include <stdio.h>

int main() {

    int mat[100][50];
    int i, j;

    for(i = 0; i < 100; i++) {
        for(j = 0; j < 50; j++) {
            printf("digite o valor da matriz [%d][%d]", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    return 0;
}