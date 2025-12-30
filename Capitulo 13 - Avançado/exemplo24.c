#include <stdio.h>

struct status {
    unsigned int ligado:1;
    signed int valor:4;
    unsigned int :3;
};

void ckeck_status(struct status s) {
    if(s.ligado == 1) {
        printf("Ligado");
    }
    if(s.ligado == 0) {
        printf("Desligado");
    }
}

int main(void) {
    
    struct status ESTADO;
    ESTADO.ligado = 1;
    ckeck_status(ESTADO);

    return 0; 
}