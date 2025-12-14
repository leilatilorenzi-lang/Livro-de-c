#include <stdio.h>
#include <stdlib.h>

struct atleta {
    char nome[50];
    char sport[50];
    int idade;
    int altura;
};


int main() {
    
    int maior = 0;
    struct atleta at[4];
    
    for (int i = 0; i < 4; i++) {
        char buffer[50];
        
        printf("Nome at[%d]: ", i);
        fgets(at[i].nome, 50, stdin);
        
        printf("Esporte\n");
        fgets(at[i].sport, 50, stdin);
        
        printf("Idade\n");
        fgets(buffer, 50, stdin);
        at[i].idade = atoi(buffer);
        
        printf("Altura\n");
        fgets(buffer, 50, stdin);
        at[i].altura = atoi(buffer);
    }
    
    for (int i = 0; i < 4; i++) {
        if (maior < at[i].idade) {
            maior = at[i].idade;
        }
    }
   
    for(int i = 0; i < 4; i++) { 
        if(at[i].idade == maior) {
            printf("O atleta com maior idade é %s\nSua idade é: %d", at[i].nome, at[i].idade);
        } 
    }
   
    return 0;
}
