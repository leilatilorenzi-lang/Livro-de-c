#include <stdio.h>
#include <stdlib.h>

void salva() {
    int v[5] = {1, 2, 3, 4, 5};
    int i;
    FILE *f;

    f = fopen("arq.txt", "w");

    if(f == NULL) {
        printf("Não foi possível salvar o arquivo\n");
        exit(1);
    } 
    for(i = 0; i < 5; i++) {
        fprintf(f, "%d\n", v[i]);   
    }
    fclose(f);
}

void carrega() {
    int n;
    FILE *f;

    f = fopen("arq.txt", "r");
    if(f == NULL) {
        printf("Não foi possível ler o arquivo");
        exit(1);
    }
    while(1) {
        if(feof(f)) {
            break;
        }
        fscanf(f,"%d", &n);
        printf("%d\n", n);
    }
    fclose(f);
}

int main(void) {

    salva();
    carrega();
    return 0;
}