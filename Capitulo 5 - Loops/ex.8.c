#include <stdio.h>

int main() {

    int num, i, total = 0;

    for(i = 1; i < 10; i++) {

        scanf("%d", &num);
        total += num;
    }
    total /= i;
    printf("o valor total é: %d\n", total);

    return 0;
}