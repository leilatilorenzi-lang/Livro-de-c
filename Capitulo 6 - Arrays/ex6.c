#include <stdio.h>
#define N 10


int main() {

    int v[N]; 

    for (int i = 0; i < N; i++) {
        printf("por favor digite um valor: ");
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (v[i] % 2 == 0)
        {
            printf("o valor: %d é par\n", v[i]);
        }
        
    }
    
    
    return 0;
}