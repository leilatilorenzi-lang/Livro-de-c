#include <stdio.h>

int main() {

    int x, y, z;
    
    printf("digite x: "); scanf("%d", &x);
    printf("digite y: "); scanf("%d", &y);

    z = x > y ? x : y;
    printf("o maior valor é: %d\n", z);

    return 0;
}