#include <stdio.h>

struct cadastro {
    char nome[50];
    int idade;
    char rua[50];
    int numero[50];
};


int main() {

    struct cadastro c[10];
    c[1] = c[2];

    return 0;
}