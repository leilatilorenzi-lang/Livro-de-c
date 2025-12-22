#include <stdio.h>
#include <math.h>

void imprime_log(float x) {
    if(x <= 0) {
        return; //Objetivo de aprendizado com a função errada
        printf("Log = %f\n", log(x));
    }
}

int main() {

    int x = 10;
    imprime_log(x);
    return 0;
}