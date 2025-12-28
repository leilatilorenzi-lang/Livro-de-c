#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fp;
    char c;
    fp = fopen("arquivo.txt", "r");
    
    if(fp == NULL) {
        printf("Não foi possível abrir o arquivo\n");
        exit(1);
    }

    while((c = getc(fp)) != EOF) {
        putchar(c);
    }
    
    return 0;
}