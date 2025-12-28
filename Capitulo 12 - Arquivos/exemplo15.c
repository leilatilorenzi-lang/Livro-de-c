#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    arq = fopen("ArqGrav.txt", "rb");

    if(arq == NULL) {
        printf("Não foi possível abrir o arquivo!\n");
        exit(1);
    }

    char str[20], str2[20];
    float x;
    int i, v1[5], v2[5];

    fread(str, sizeof(char), 12, arq);
    str[12] = '\0';
    printf("%s\n", str);

    fread(str2, sizeof(char), 5, arq);
    str2[5] = '\0';
    printf("%s\n", str2);

    fread(&x, sizeof(float), 1, arq);
    printf("%f\n", x);

    fread(v1, sizeof(int), 5, arq);
    for(i = 0; i < 5; i++) {
        printf("%d", v1[i]);
        putchar('\n');
    }
    
    fread(v2, sizeof(int), 5, arq);
    for(i = 0; i < 5; i++) {
        printf("%d", v2[i]);
        putchar('\n');
    }

    fclose(arq);
    return 0;
}