#include <stdio.h>

int main() {

    char ch;
    int a, b;

    printf("Digite uma operação matemática: ");
    ch = getchar();
    printf("Digite dois números inteiros: ");
    scanf("%d%d", &a, &b);

    switch(ch) {
        case '+':
            printf("%d\n", a+b);
            break;
        case '-':
            printf("%d\n", a-b);
            break;
        case '*':
            printf("%d\n", a*b);
            break;
        case '/':
            printf("%d\n", a/b);
            break;
    }

    return 0;
}