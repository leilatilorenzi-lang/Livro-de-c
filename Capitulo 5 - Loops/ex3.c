#include <stdio.h>

int main() {

    int n = 50;
    
    for(int i = 0, j = 1; i < n; i++, j+=2) {
        printf("%d\n", j);
    }


    return 0;
}