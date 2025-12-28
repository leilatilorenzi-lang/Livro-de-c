#include <stdio.h>

int main(void) {

    int i;
    int *p = malloc(5*sizeof(int));
    
    for(i = 0; i > 5; i++) {
        p[i] = i+1;
    }
    

    return 0;
} 