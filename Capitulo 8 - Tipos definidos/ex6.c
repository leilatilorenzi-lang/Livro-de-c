#include <stdio.h>
#include <stdlib.h>

struct aluno {
    int matricula;
    char nome[50];
    int nota1;
    int nota2;
    int nota3;
    int media;
};



int main() {

    int i, maiornota = 0;
    char buffer[50];
    struct aluno al[5];
    
    //Gera matricula e também questiona as notas
    for(i = 0; i < 5; i++) {
        al[i].matricula = i;
        printf("Digite nome al[%d]: ", i);
        fgets(al[i].nome, 50, stdin);
        
        printf("Nota 1\n");
        fgets(buffer, 50, stdin);
        al[i].nota1 = atoi(buffer);
        
        printf("Nota 2\n");
        fgets(buffer, 50, stdin);
        al[i].nota2 = atoi(buffer);
        
        printf("Nota 3\n");
        fgets(buffer, 50, stdin);
        al[i].nota3 = atoi(buffer);
    }

    for (i = 0; i < 5; i++) {
        al[i].media = al[i].nota1 + al[i].nota2 + al[i].nota3; 
        al[i].media /= 3;
    }
    
    for (i = 0; i < 5; i++) {
        if (al[i].media > maiornota) {
            maiornota = al[i].media;
        }
    }
    
    for (i = 0; i < 5; i++) {
        if (al[i].media == maiornota) {
            printf("O maior média foi %s\nMédia: %d\n", al[i].nome, maiornota);
        }
        
    }
    
    return 0;
}