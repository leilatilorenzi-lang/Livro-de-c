#include <stdio.h>

int main() {

    unsigned char x, y;
    x = 10;
    printf("x = %d\n", x);
    y = ~x;
    printf("~x = %d\n", y);

    return 0;
}