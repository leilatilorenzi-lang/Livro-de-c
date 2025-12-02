#include <stdio.h>

int main() {

    int dia, mes, ano;

    printf("Por favor digite o dia, o mês, e o ano!");
    scanf("%d %d %d", &dia, &mes, &ano);
    
    printf("%d/%d/%d", dia, mes, ano);
    return 0;
}