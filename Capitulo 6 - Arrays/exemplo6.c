#include <stdio.h>

int main() {


    int cib[5][5][5];
    int i, j, k;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            for(k = 0; k < 5; k++) {
                cib[i][j][k] = 0;
            }
        }
    }
    printf("%d", cib[1][2][3]);


    return 0;
}