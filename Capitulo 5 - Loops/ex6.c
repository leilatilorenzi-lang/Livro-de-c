#include <stdio.h>

int main() {

    for (int i = 10; i >= 0; i--)
    {
        printf("%d\n", i);
        
        if(i == 1) {
            printf("Fim!\n");
            break;
        }
    }
    

    return 0;
}