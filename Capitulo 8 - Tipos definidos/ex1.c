#include <stdio.h>
#include <stdlib.h>

struct cadastro {
    char nome[50];
    int idade;
    char rua[50];
};

int main() {

    struct cadastro cad;
    char buffer[50];

    printf("Nome: ");
    fgets(cad.nome, 50, stdin);
    
    printf("Idade: ");
    fgets(buffer, 50, stdin);
    cad.idade = atoi(buffer);

    printf("Rua: ");
    fgets(cad.rua, 50, stdin);

    for (int i = 0; i < 15; i++) {
        printf("=");
    }   putchar('\n');
    
    printf("Sua nome é: %s", cad.nome);
    printf("Sua idade é: %d\n", cad.idade);
    printf("Seu endereço é: %s", cad.rua);


    return 0;
}