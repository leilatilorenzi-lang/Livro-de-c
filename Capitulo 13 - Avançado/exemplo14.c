#include <stdio.h>

int main(void) {
    
    float n = 123.45678;
    int precisao = 10;
    printf("n = %.*f\n", precisao, n);

    return 0;
}