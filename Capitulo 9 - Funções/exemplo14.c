#include <stdio.h>

struct pontos {
    int *x, *y;
};

void add1(struct pontos *pt) {
    *pt->x = *pt->x + 1;
    *pt->y = *pt->y + 1;
    printf("Durante X = %d Y = %d\n", *pt->x, *pt->y);
}

int main(void) {
    
    int x = 10;
    int y = 20;
    
    struct pontos pt;
    pt.x = &x;
    pt.y = &y;

    printf("Antes X = %d Y = %d\n", *pt.x, *pt.y);
    add1(&pt);
    printf("depois X = %d Y = %d\n", *pt.x, *pt.y);

    return 0;
}