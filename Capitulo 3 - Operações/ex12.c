#include <stdio.h>
#define PI 3.141592

int main() {

    int altura, raio;
    double v;

    altura = 3;
    raio = 3;

    raio *= raio;


    v = PI*raio*altura;
    printf("%f\n", v);

    return 0;
}