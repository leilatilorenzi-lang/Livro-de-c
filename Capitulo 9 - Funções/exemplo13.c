#include <stdio.h>

struct ponto {
    int x;
    int y;
};

void imprime(struct ponto p) {
    printf("X = %d\n", p.x);
    printf("Y = %d\n", p.y);
}

int main(void) {

    struct ponto pt;
    pt.x = 12;
    pt.y = 10;

    imprime(pt);

    return 0;
}