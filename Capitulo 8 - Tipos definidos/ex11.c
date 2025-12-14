#include <stdio.h>  

struct data {
    int AA;
    int MM;
    int DD;
};

int main() {

    struct data d;
    struct data d2;
    int total1;
    int total2;

    d.DD = 11;
    d.MM = 4;
    d.AA = 2014;

    d2.DD = 14;
    d2.MM = 12;
    d2.AA = 2025;

    total1 = d.DD + (d.MM*30) + (d.AA*365);
    total2 = d2.DD + (d2.MM*30) + (d2.AA*365);

    printf("A diferença de dias é: %d", total2-total1);

    return 0;
}