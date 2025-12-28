#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p, i;
    p = (int *) malloc(50*sizeof(int));

    for(i = 0; i < 50; i++) {
        p[i] = i+1; 
    }

    free(p);
    
    for(i = 0; i < 50; i++) {
        printf("%d\n", p[i]);
    }


    return 0;
}