#include <stdio.h>

int main() {

    int *p, *p1, x, y;
    p = &x;
    p1 = &y;

    if(p1 == p) {
        printf("Endereços iguais!\n");
    }
    else {
        printf("Endreços diferentes\n");
    }
    
    return 0; 
}