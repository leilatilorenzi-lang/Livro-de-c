#include <stdio.h>

int main() {

    int v1[] = {1, 2, 3, 6, 4, 12, 7, 9};
    int v2[8];

    for (int i = 0; i < 8; i++) {
        v2[i] = v1[i]*v1[i];
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%d- %d**2 = %d\n", i,v1[i] ,v2[i]);
    }
    
    

    return 0;
}