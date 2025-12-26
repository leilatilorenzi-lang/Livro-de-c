#include <stdio.h>

int main(void) {

    int array[5] = {1, 2, 3, 4, 5};
    int *p = &array[0];
    
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(p+i) << 1);
    }
    


    return 0;
}