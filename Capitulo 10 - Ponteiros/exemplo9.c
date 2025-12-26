#include <stdio.h>

int main(void) {

    void *pp;
    int p2 = 10;
    pp = &p2;
    printf("Conteudo de PP: %d\n",*(int*)pp); 

    return 0;
}