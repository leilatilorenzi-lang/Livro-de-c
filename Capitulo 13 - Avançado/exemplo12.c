#include <stdio.h>

int main(void) {

    float n = 123.45678;

    printf("n = %.3f\n", n);
    printf("n = %.5f\n", n);
    printf("n = %.e\n", n);
    printf("n = %.5g\n", n);

    return 0;
}