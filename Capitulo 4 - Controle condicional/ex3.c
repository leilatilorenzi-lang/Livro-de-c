#include <stdio.h>

int main() {

    int salario, emp;
    salario = 2000;
    printf("digite o valor de emprestimo: "); 
    scanf("%d", &emp);

    salario*0.2 < emp ? printf("Emprestimo impossível") : printf("Emprestimo possível");

    return 0;
}