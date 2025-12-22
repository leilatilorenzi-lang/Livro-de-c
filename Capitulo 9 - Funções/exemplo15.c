#include <stdio.h>

struct ponto {
    int x, y;
};

void atribui(struct ponto *pt) {
    pt->x = 10;
    pt->y = 20;
}

int main(void) {

    struct ponto p;
    atribui(&p);
    printf("X = %d\n", p.x);
    printf("Y = %d\n", p.y);

    return 0;
}