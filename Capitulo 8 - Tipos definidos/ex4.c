#include <stdio.h>

struct retangulo {
    int posX;
    int posY;
};


int main() {

    struct retangulo ret;
    ret.posX = 5;
    ret.posY = 3;

    printf("A área do Retangulo é: %d\n", ret.posX*ret.posY);

    return 0;
}