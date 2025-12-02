#include <stdio.h>

int main() {
    
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num > 10) {
        printf("o numero é maior de 10!\n");
    }

    return 0;
}