#include <stdio.h>

enum escapes {retrocesso = '\b', tabulacao = '\t', novalinha = '\n'};

int main() {

    enum escapes e = novalinha;
    printf("Teste %c de %c estcrita\n", e, e);
    e = tabulacao;
    printf("Teste %c de %c estcrita\n", e, e);

    return 0;
}