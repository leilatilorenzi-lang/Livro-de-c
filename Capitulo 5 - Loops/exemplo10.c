#include <stdio.h>

int main() {

    int a, b;
    printf("digite o valor de a: "); scanf("%d", &a);
    printf("digite o valor de b: "); scanf("%d", &b);

    while(a <= b) {
        a++;
        if(a == 5) 
            continue;
    }
    printf("%d\n", a);

    return 0;
}