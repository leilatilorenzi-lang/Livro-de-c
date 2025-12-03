#include <stdio.h>

int main() {

    double i, total;
    double n_user = 1200;
    double n_i = 1, n_f = 1;
     
    for(i = 1; i < n_user; i++) {
        total = n_i + n_f;
        n_i = n_f;
        n_f = total;
    }

    printf("%f\n", total);

    return 0;
}