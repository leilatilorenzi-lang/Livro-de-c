#include <stdio.h>

double conversor(double f) {

    double c;
    c = (f-32)*(5.0/9.0);
    return c;
}

int main() {

    double fh, c;
    printf("Insira o número em F: ");
    scanf("%lf", &fh);
    c = conversor(fh);
    printf("o valor convertido é: %f\n", c);

    return 0;
}