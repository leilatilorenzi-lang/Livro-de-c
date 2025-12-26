#include <stdio.h>

int main() {

    float array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float *p = array;

    for(int i = 0; i < 10; i++) {
        printf("%f\n", *p+i);
    }
    

    return 0;
}