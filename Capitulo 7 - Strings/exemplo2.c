#include <stdio.h>

int main() {

    char nome[30];
    printf("por favor digite seu nome: ");


    fgets(nome, 30, stdin);
    printf("o nome digitado foi: %s", nome);

    return 0;
}