#include <stdio.h>

int main() {

    int num;
    printf("digite um numero: "); scanf("%d", &num);
    
    for(int i = (sizeof(int) * 8 - 1); i >= 0; i--) {
        
        int bit = (num >> i) & 1;
        printf("%d", bit);
        
    } 

    return 0;
}
