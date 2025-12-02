#include <stdio.h>

int main() {

    int x, y, z;
    
    printf("digite x: "); scanf("%d", &x);
    printf("digite y: "); scanf("%d", &y);

    if(x > y)
        z = x; 
    else
        z = y;

    printf("o maior valor e o: %d", z);
    return 0;
}