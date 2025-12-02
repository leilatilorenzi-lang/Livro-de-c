#include <stdio.h>

int main() {

    char ch;
    printf("insira sua pontuação: "); ch = getchar();

    switch (ch) {
    case '.': printf("ponto\n"); break;
    case ',': printf("virgula\n"); break;
    case ':': printf("dois-pontos\n"); break;
    case ';': printf("ponto-virgula\n"); break;
    default: printf("não é pontuação\n"); break;
    }

    return 0;
}