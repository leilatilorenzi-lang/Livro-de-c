#include <stdio.h>

int main(void) {

    int n = 125;
    float f = 5.25;
    double d = 10.53;
    char letra = 'A';
    char palavra[10] = "Programa";

    printf("Valor inteiro: %d\n", n);
    printf("Valor inteiro: %i\n", n);
    printf("Valor real: %f\n", f);
    printf("Valor real: %f\n", d);
    printf("Caractere: %c\n", letra);
    printf("Valor númerico do caractere: %d\n", letra);
    printf("Palavra: %s\n", palavra);

    return 0;
}