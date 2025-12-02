#include <stdio.h>

int main() {

    int i, j, k;

    for(i = 0; i<5; i++) {
        for(j = 0; j < 5; j++) {
            for(k = 0; k < 5; k++) {
                if (i == 2 && j == 3 && k == 1) {
                    goto fim;
                }
                else {
                    printf("posição [%d, %d, %d]\n\n", i, j, k);
                }
                
            }
        }
    } 
    fim:
    printf("\n\n\nfim do programma");
    return 0;
}