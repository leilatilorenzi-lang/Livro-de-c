#include <stdio.h>

int main() {

    int n_user = 35, total = 1;
    for (int i = 1, j = 1; i < n_user; i++, j++) {
        
        printf("%d ", i);

        if(j == total) {
            putchar('\n');
            total++;
            j = 0;
        }
    }
    

    return 0;
}