#include <stdio.h>

int main() {

    int num;
    printf("digite um numero: ");
    scanf("%d", &num);

    if(num == 10) {
        printf("o numero é igual a 10");
    } 
    else if(num>10) {
        printf("o numeor é maior que 10");
    }
    else {
        printf("numero menor que 10");
    }

    return 0;
}