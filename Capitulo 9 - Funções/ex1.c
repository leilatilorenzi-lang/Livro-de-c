#include <stdio.h>

int maior(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {

    int num1, num2, maiorn;
    printf("digite dois números: ");
    scanf("%d %d", &num1, &num2);
    maiorn = maior(num1, num2);
    
    printf("o maior numero é: %d\n", maiorn);

    return 0;
}