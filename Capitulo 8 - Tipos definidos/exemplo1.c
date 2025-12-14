#include <stdio.h>
#include <string.h>

struct cadastro {
    char nome[60];
    int idade;
    char rua[50];
    int numero;
};

int main() {

    struct cadastro c;
    strcpy(c.nome, "Carlos");
    c.idade = 18;
    strcpy(c.rua, "Avenida Brasil");
    c.numero = 1082;

    return 0;
}
