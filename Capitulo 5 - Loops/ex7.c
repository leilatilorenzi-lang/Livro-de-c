#include <stdio.h>

int main() {

    int i, num, total = 0;
    printf("por favor digite números: ");
    
    for(i = 0; i < 10; i++) {
        scanf("%d", &num);
        total = total + num;
    }
    printf("o total ficou em: %d\n", total);
    return 0;
}