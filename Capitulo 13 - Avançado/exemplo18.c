#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
    float f = 3.45;
    time_t tempo;

    struct tm *infotempo;
    char texto[80];
    time(&tempo);
    infotempo = localtime(&tempo);
    printf("Aô Mundo!\n");


    printf("Valor de f = %f\n", f);
    strftime(texto, 80, "Data: %a, %d/%b/%Y", infotempo);
    puts(texto);
    setlocale(LC_ALL, "ptb");
    strftime(texto, 80, "Data: %a, %d/%b/%Y", infotempo);
    puts(texto);
}