#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *arq;
    arq = fopen("ArqGrav.txt", "rb");
    
    if (arq == NULL) {
        printf("Não foi possível abrir o arquivo");
        exit(1);
    }

    char str[20];
    int t;
    fread(&t, sizeof(int), 1, arq);
    fread(str, sizeof(char), t, arq);

    str[t] = '\0';
    printf("%s\n", str);
    fclose(arq);
    
    return 0;
}