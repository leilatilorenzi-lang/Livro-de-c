#include <stdio.h>

int soma(int a, int b) {return a + b;}
int subtraçao(int a, int b) {return a - b;}
int produto(int a, int b) {return a * b;}
int divisao(int a, int b) {return a / b;}

int main(void) {

    int x, y;
    int (*p) (int, int);
    char ch;

    printf("Digite uma operação matemática (+ - * /): ");
    ch = getchar();
    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);

    switch (ch) {
    case '+': p = soma; break;
    case '-': p = subtraçao; break;
    case '*': p = produto; break;
    case '/': p = divisao; break;
    default: p = NULL; break;
    }

    if(ch != NULL) {
        printf("Resultado = %d\n", p(x, y));
    } 
    else {
        printf("Operação inválida\n");
    }

    return 0;
}