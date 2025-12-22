#include <stdio.h>

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}

int main(void) {
    int x = factorial(4)
    printf("!x = %d", x);
    return 0;
}