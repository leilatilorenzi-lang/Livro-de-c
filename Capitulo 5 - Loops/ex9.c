#include <stdio.h>

int main() {

    int num, i, total = 0;

    for(i = 1; i < 10; i++) {
        scanf("%d", &num);
        
        if (num >= 0) {
            total += num;
        }
        else {
            printf("Não imprama valores negativos!!!\n");
            i--;
        }
    }

    total /= i;
    printf("o valor total é: %d\n", total);

    return 0;
}