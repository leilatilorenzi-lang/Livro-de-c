#include <stdio.h>

float calcimc(float peso, float altura) {
    
    float imc = peso/(altura*altura);
    return imc;
}

int main(void) {

    float total;
    float peso = 75;
    float altura = 1.75;
    total = calcimc(peso, altura);
    printf("total = %f\n", total);

    return 0;
}