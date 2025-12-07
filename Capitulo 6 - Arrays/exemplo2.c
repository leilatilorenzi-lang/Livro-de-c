#include <stdio.h>


int main() {

    int notas[100];
    int i;
    for(i = 0; i < 100; i++) {
        printf("Digite a nota do aluno: ");
        scanf("%d", &notas[i]);
    }
    

    return 0;
}