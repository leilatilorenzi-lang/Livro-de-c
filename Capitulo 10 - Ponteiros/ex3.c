#include <stdio.h>

int main(void) {


    float matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    float *p = &matrix[0][0];

    for(int i =  0; i < 9; i++) {
        printf("%f\n", *(p+i));
    }

    return 0;
}