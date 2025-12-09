#include <stdio.h>
#include <string.h>

int main() {

    char str1[100], str2[100];
    printf("Digite uma string: ");
    gets(str1);
    printf("Entre com mais uma String\n");
    gets(str2);

    if (strcmp(str1, str2) == 0) {
        printf("Strings iguais!\n");
    } 
    else {
        printf("Strings Diferentes!\n");
    }
    

    return 0;
}