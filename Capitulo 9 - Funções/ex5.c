#include <stdio.h>
//#include <math.h>
#define PI 3.1414592

float calcvolume(int raio) {

    float volume;
    volume = (4.0/3.0)*PI*(raio*raio*raio);
    return volume;
}

int main(void) {

    float raio = 5.0;
    float total = calcvolume(raio);

    printf("total = %f\n", total);
    return 0;
}