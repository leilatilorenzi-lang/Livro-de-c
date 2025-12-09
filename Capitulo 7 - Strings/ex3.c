#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    int i;

    printf("Digite uma String: ");
    fgets(str, 100, stdin);
    
    for (i = 0; str[i] != '\0'; i++);
    printf("a string %s\nTem %d Letras\n", str, i-1);

    return 0;
}