#include <stdio.h>
#define valor

int main(void) {

    #ifdef valor
        printf("Definido\n");
    #else
        printf("Não definido\n");
    #endif
    return 0;

}