#include <stdio.h>

int main() {

    int v[5] = {1,2,3,4,5};
    int v1[5];
    int i;

    for(i = 0; i<5; i++) {
        v1[i] = v[i];
    }
    printf("%d\n", v1[1]);
    
    return 0;
}