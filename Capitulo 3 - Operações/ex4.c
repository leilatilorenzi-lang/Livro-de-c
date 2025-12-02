#include <stdio.h>
#include <stdlib.h>

int media(int num_args, char *numeros[]);

//queria abusar meu conhecimento de C agora
int main(int argc, char *argv[]) {

    int mediat = media(argc, argv);
    printf("%d\n", mediat);

    return 0;
}

int media(int num_args, char *numeros[]) {
    
    int total = 0;

    for(int i = 0; i < num_args; i++) {
        total += atoi(numeros[i]);
    }

        return total / (num_args - 1);
}

