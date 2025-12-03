#include <stdio.h>

int main() {

    int n_user, total = 0;
    printf("por favor digite um numero inteiro: ");

    while(1) {
        scanf("%d", &n_user);
            if(n_user > total) {
                total = n_user;
            }
            else if (n_user < 0){
                break;
            }
            
        }
        
    printf("o maior número é: %d", total);

    return 0;
}