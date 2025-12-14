#include <stdio.h>
#include <stdlib.h>

struct cadastro {
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};


int main() {

    struct cadastro c[4];
    char buffer[50];

    for(int i = 0; i < 4; i++) {
        printf("Nome: ");
        fgets(c[i].nome, 50, stdin);      

        printf("Idade: ");
        fgets(buffer, 50, stdin);
        c[i].idade = atoi(buffer);

        printf("Rua: ");
        fgets(c[i].rua, 50, stdin);

        printf("Numero: ");
        fgets(buffer, 50, stdin);
        c[i].numero = atoi(buffer);
    }

    for (int i = 0; i < 4; i++) {
        printf("Nome: %s", c[i].nome);
        printf("idade: %d\n", c[i].idade);
        printf("Rua: %s", c[i].rua);
        printf("numero: %d\n", c[i].numero);
    }
    

    return 0;
}