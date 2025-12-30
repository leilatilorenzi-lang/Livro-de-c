#include <stdio.h>

void imprime() {
    static int n = 0;
    printf("%d\n", n++);
}

int main(void) {

    for(int i = 1; i <= 10; i++) {
        imprime();
    }
    

    return 0;
}
