#include <stdio.h>
#include <math.h>

int raiz_perfeita(int num) {

    if(num <= 0) {
        return 0;
    }

    double raizflutuante = sqrt(num);
    int raizinteira = (int)raizflutuante;

    if (raizinteira*raizinteira == num) {
        return 1;
    } 
    else {
        return 0;
    }
}


int main() {

    int i;
    for (i = 1; i < 10000; i++) {
        if(raiz_perfeita(i) == 1) {
            printf("%d\n", i);
        }
    }
    return 0;
}