#include <stdio.h>

int main() {

    int n_user;
    float total = 1;
    printf("por favor digite um valor: "); scanf("%d", &n_user);

    for(float i = 1; i < n_user; i++){ 
        total = total + (1.0 / i);
    }
    printf("%f", total);

    return 0;
}