#include <stdio.h>

void add1(int *n) {
    *n = *n + 1;
}

int main() {

    int x = 1;

    add1(&x);
    printf("%d\n", x);

    return 0;
}