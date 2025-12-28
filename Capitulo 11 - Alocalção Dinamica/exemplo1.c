#include <stdio.h>

struct pontos {
    float z;
    int x, y;
};


int main() {

    struct pontos ponto;
    printf("Tamanho int %d\n", sizeof(short int));
    printf("Tamanho float %d\n", sizeof(float));
    printf("Tamanho double %d\n", sizeof(double));
    printf("Tamanho estrutura %d\n", sizeof(ponto));

    return 0;
}