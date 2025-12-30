#include <stdio.h>

int main(void) {

    unsigned int n = 2147483647;
    printf("Valor real: %d\n", n);
    printf("Valor real: %u\n", n);
    n++;
    
    printf("Valor real: %d\n", n);
    printf("Valor real: %u\n", n);
    printf("Endereço de n = %p\n", &n);
    
    return 0;
}
