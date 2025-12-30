#include <stdio.h>

int main(void) {

    char texto[20] = "Meu program a C";
    printf("%s\n", texto);
    printf("%.3s\n", texto);
    printf("%.12s\n", texto);

    return 0;
}