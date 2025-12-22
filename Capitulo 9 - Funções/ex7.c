#include <stdio.h>

struct tempo {
    int horas;
    int minutos;
    int segundos;
};

int calcsegundos(struct tempo t) {
    int total;
    total = ((t.horas * 60) * 60) + (t.minutos * 60) + t.segundos;

    return total;
}

int main() {

    struct tempo tp;
    tp.horas = 15;
    tp.minutos = 30;
    tp.segundos = 48;

    int total;

    total = calcsegundos(tp);
    printf("o total em segundos é: %d\n", total);

    return 0;
}