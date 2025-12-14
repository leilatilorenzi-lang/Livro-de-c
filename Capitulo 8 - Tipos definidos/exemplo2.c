#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cadastro {
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

int main() {

    struct cadastro c;
    char buffer[50];

    fgets(c.nome, 50, stdin);
    fgets(buffer, 50, stdin);
    c.idade = atoi(buffer);

    fgets(c.rua, 50, stdin);
    fgets(buffer, 50, stdin);
    c.numero = atoi(buffer);

    return 0;
}