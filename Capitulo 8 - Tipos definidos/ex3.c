#include <stdio.h>

struct cordenadas {
    short int x;
    short int y;
};

int main() {

    struct cordenadas c;
    int distancia;
    
    printf("Posição X: ");
    scanf("%hd", &c.x);
    
    printf("Posição X: ");
    scanf("%hd", &c.y);
    
    if(c.x > c.y) {
        distancia = c.x - c.y;
    }
    else {
        distancia = c.y - c.y;
    }

    printf("A distancia entre x e y é de: %d\n", distancia);

    return 0;
}