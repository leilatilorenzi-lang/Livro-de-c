#include <stdio.h>

int main() {

    int v1[] = {1, 3, 4, 12, 4, 5, 6, 11, 4, 3};
    int v2[] = {3, 1, 5, 3, 1, 5, 11, -3, -1, 4};
    int v3[10];

    for(int i = 0; i < 10; i++) {
        v3[i] = v1[i] + v2[i];
    }

    for(int i = 0; i < 10; i++) {
        printf("%d\n", v3[i]);
    }

    return 0;
}