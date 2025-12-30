#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main(void) {

    int x, y, z;
    int (*p) (int, int);

    printf("Digite dois números: ");
    scanf("%d %d", &x,&y);+

    p = max;
    z = p(x, y);
    
    printf("Maior valor: %d\n", z);

    return 0;
}