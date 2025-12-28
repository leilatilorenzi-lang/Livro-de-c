#include <stdio.h>

int main(void) {

    FILE *fp;
    fp = fopen("exemplo.bin", "wb");
    
    if(fp == NULL) {
        printf("Erro de abertuda no arquivo\n");
    }
    
    
    fclose(fp);
    
    return 0;
}