#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    FILE *arq;
    arq = fopen("ArqGrav.txt", "wb");

    if(arq == NULL) {
        printf("Não foi possível abrir o arquivo\n");
        exit(1);
    }

    char str[20] = "Hello World!";
    int t = strlen(str);

    fwrite(&t, sizeof(int), 1, arq);
    fwrite(str, sizeof(char), t, arq);
    fclose(arq);
    return 0;
}