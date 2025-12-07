#include <stdio.h>
#define N 6

int main() {

    int vetor[N+1];

    for(int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < N; i++) {
        printf("Vetor[%d] = %d",i , vetor[i]);
    }

    return 0;
}
