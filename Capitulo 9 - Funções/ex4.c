#include <stdio.h>
#define PI 3.1414592

int calcvolume(int raio, int altura) {
    int v = PI*(raio*2)*altura;
    return v;
}

int main() {

    int raio, altura, volume;
    raio = 20;
    altura = 15;
    volume = calcvolume(raio, altura);

    printf("V = %d\n", volume);

    return 0;
}