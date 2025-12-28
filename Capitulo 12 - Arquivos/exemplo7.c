#include <stdio.h>

int main(void) {

    char str[100];
    FILE *f;
    f = fopen("teste.txt", "r");

    fscanf(f, "%s", str);
    printf("%s", str);

    fclose(f);

    return 0;
}