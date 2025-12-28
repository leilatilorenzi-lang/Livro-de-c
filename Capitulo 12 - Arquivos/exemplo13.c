#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *arq;
    arq = fopen("ArqGrav.txt", "wb");
    
    if(arq == NULL) {
        printf("Problemas na criação do arquivo\n");
        exit(1);
    }
    char str[20] = "Hello World!";
    float x = 5;
    int v[5] = {1, 2, 3, 4, 5};

    fwrite(str, sizeof(char), strlen(str), arq);
    fwrite(&x, sizeof(float), 1, arq);
    fwrite(v, sizeof(int), 2, arq);
    fclose(arq);

    return 0;
}