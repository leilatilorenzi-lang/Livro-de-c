#include <stdio.h>
#include <string.h>

int main() {

    int i;
    char str1[100];
    
    printf("Por favor digite uma String: ");
    scanf("%s", str1);
    
    for (i = 0; str1[i] != '\0'; i++);
    char strtmp[i+1];
    
    int j;
    for(j = 0; j < i; j++) {
        strtmp[j] = str1[i-j-1];
    }
    strtmp[j] = '\0';

    if(strcmp(strtmp, str1) == 0) {
        printf("\nA string é um palíndromo\n");
    }
    else {
        printf("\nA string NÃO é um palíndromo\n");
    }


    return 0;
}