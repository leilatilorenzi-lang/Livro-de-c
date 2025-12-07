#include <stdio.h>

int main() {

 
    int x, y;
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("por favor digite as cordenadas: ");
    scanf("%d %d", &x, &y);

    printf("A soma dos valores: %d\nCom %d\né igual a %d",v[x], v[y], v[x] + v[y]);

    return 0;
}