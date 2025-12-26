#include <stdio.h>

int main(void) {

    int vet[5] = {1, 2, 3, 4, 5};
    int *p = vet;
    for(int i = 0; i < 5; i++) {
        printf("%d\n", *p+i);
    }

    return 0;
}
