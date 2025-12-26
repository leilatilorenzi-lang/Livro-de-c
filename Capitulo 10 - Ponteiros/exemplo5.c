#include <stdio.h>

int main() {

    int *p = 0x010;
    printf("p = Hexadecimal: %p Decimal: %d\n",p,p);
    p++;
    printf("p = Hexadecimal: %p Decimal: %d\n",p,p);
    p += 15;
    printf("p = Hexadecimal: %p Decimal: %d\n",p,p);
    return 0;
}