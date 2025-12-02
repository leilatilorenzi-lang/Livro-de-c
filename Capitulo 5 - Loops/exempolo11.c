#include <stdio.h>


int main() {

    int i = 0;
    inicio:
    if (i < 5)
    {
        printf("numero: %d\n", i);
        i++;
        goto inicio;
    }
    

    return 0;
}