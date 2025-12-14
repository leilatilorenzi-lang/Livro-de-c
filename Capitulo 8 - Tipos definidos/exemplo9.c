#include <stdio.h>

enum semana {domingo = 1, segunda, terça, quarta=7, quinta, sexta, sabado};

int main() {

    printf("Domingo = %d\n", domingo);
    printf("segunda = %d\n", segunda);
    printf("terça = %d\n", terça);
    printf("quarta = %d\n", quarta);
    printf("quinta = %d\n", quinta);
    printf("setxta = %d\n", sexta);
    printf("sabado= %d\n", sabado);

    return 0;
}