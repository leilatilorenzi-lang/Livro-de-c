#include <stdio.h>
#define N 6

int main() {
    
    int vetor[N];
    printf("por favor digite alguns valores\n");

    for(int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    for(int i = N-1; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}