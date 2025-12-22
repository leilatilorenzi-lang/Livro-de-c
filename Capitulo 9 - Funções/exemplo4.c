#include <stdio.h>

void imprime(int n) {
    
    for(int i = 0; i <= n; i++) {
        printf("Linha %d\n", i);
    }
} 

int main(void) {

    int num;
    printf("Digite o número de linhas: ");
    scanf("%d", &num);
    imprime(num);

    return 0;
}