#include <stdio.h>

int main(void) {

    int n = 125;
    printf("n = %.8d (decimal)\n", n);
    printf("n = %.8o (octa)\n", n);
    printf("n = %.5x (Hexadecimal)\n", n);

    return 0;
}