#include <stdio.h>

int main() {

    int num;
    printf("Digite o numero: ");
    scanf("%d", &num);

    if(num == 10) {
        printf("o numero é igual a 10\n");
    } 
    else {
        printf("o numero é diferente de 10\n");
    } 

    return 0;
}