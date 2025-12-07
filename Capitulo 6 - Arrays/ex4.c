#include <stdio.h>

int main() {
    
    int total;
    int A[] = {1, 0, 5, -2, -5, 7};
    
    total = A[0] + A[1] + A[5];
    
    A[4] = 100;
    printf("a soma dos valores é: %d\n", total);

    for (int i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }
    
    
    return 0;
}