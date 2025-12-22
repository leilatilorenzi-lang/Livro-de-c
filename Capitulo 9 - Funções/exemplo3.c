#include <stdio.h>

int factiorial(int num);

int main() {
    
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    int fac = factiorial(num);
    printf("%d = %d\n", num, fac);

    return 0;
}

int factiorial(int num) {

    int i, j = 1;
    for (i = 1; i <= num; i++) {
        j *= i;
    }
    
    return j;
}