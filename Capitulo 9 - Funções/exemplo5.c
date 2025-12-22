#include <stdio.h>

int soma(int x, int y) {
    return x + y;
}


int main() {

    int num1, num2;
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);
    printf("%d + %d = %d\n", num1, num2, soma(num1, num2));

    return 0;
}