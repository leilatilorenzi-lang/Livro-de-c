#include <stdio.h>

int main() {

    char str[100];

    printf("Por favor digite uma string em minuscula: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]-32);
    }
    putchar('\n');
    return 0;
}
