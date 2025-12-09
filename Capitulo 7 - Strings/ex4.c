#include <stdio.h>

int main() {

    char str[100];
    int i;

    printf("Por favor digite uma String: ");
    fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++);
    for (; i >= 0; i--) {
        printf("%c", str[i]);
    }
    


    return 0;
}