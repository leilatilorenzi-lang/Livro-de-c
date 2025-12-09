#include <stdio.h>

int main() {

    char str[] = {"Minha String"};
    int i;

    for(i = 0; str[i] != '\0'; i++);
    char strtmp[i+1];

    int j;
    for(j = 0; str[j] != '\0'; j++) {
        strtmp[j] = str[i-j-1];
    }
    
    strtmp[j] = '\0';
    
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = strtmp[i];
    }

    printf("%s", str);

    return 0;
}