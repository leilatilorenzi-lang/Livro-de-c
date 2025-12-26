#include <stdio.h>

int main() {

    int count = 10;
    int *p;

    p = &count;
    printf("%d\n", *p);

    return 0;
}