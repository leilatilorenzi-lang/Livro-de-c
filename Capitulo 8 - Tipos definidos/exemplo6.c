#include <stdio.h>
#include <stdlib.h>

struct endereço {
    char rua[50];
    int numero;
};

struct cadastro {
    char nome[50];
    int idade;
    struct endereço ender;
};

int main() {

    char buffer[50];
    struct cadastro c;

    printf("Nome: ");
    fgets(c.nome, 50, stdin);

    printf("idade: ");
    fgets(buffer, 50, stdin);
    c.idade = atoi(buffer);

    printf("Rua: ");
    fgets(c.ender.rua, 50, stdin);

    printf("Numero da casa: ");
    fgets(buffer, 50, stdin);
    c.ender.numero = atoi(buffer);

    return 0;
}

