#include <stdio.h>

int main(void) {

    void *p = 0x5dc;
    printf("p = Hexadecimal: %p Decimal: %d\n", p, p);
    p++;
    printf("p = Hexadecimal: %p Decimal: %d\n", p, p);
    p += 15;
    printf("p = Hexadecimal: %p Decimal: %d\n", p, p);

    return 0;
}