#include <stdio.h>

int main() {

    int total, ganhador1, ganhador2, ganhador3;
    total = 780000;
    ganhador1 = total * 0.46;
    ganhador2 = total * 0.32;
    ganhador3 = total * 0.22;

    printf("O jogador 1 ganhou: %d\nO jogador 2 ganhou %d\nO jogador 3 ganhou %d\n", 
        ganhador1, ganhador2, ganhador3);
    

    return 0;
}