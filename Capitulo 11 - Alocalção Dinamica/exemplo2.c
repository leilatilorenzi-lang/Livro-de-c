#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int *p;
    p = (int *) malloc(5*sizeof(int));
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d", p[i]);
    }
    
    

}