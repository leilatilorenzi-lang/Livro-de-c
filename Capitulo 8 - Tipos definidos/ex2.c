#include <stdio.h>

struct cordenadas {
    int x;
    int y;
};

int main() {

    struct cordenadas c;

    printf("PoX: ");
    scanf("%d", &c.x);
    printf("PoY: ");
    scanf("%d", &c.y);

    printf("Sua posição X: %d\n", c.x);
    printf("Sua posição Y: %d\n", c.y);
    printf("%d,%d\n", c.x, c.y);

    return 0;
}