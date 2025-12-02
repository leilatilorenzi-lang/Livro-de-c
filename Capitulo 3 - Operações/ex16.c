#include <stdio.h>

int main() {

    int num;

    printf("digite um numero\n");
    scanf("%d", &num);
    printf("o numero %d pela metade é: %d\n", num, num >> 1);
    printf("Ja o dobro e: %d\n", num << 1);


    return 0;
}