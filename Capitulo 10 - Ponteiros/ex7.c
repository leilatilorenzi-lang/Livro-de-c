#include <stdio.h>
#include <string.h>

int len(char *p);
void comparar(char *maiorstring, char *menorString);

int main(void) {


    char String1[] = "Minha String";
    char String2[] = "Str";

    char *pt1 = &String1[0];
    char *pt2 = &String2[0];


    comparar(pt1, pt2);

    return 0;
}

int len(char *p) {
    int i;
    for(i = 0; *(p+i) != '\0'; i++);

    return i;
}

void comparar(char *maiorstring, char *menorString) {

    int i, j;
    int maiorvalor = len(maiorstring);
    int menorvalor = len(menorString);

    for(i = 0; i <= (maiorvalor-menorvalor); i++) {

        for(j = 0; j < menorvalor; j++) {
            if(maiorstring[i + j] != menorString[j]) {
                break;
            }
        }
    
        if (j == menorvalor) {
            printf("1");
            return;
        }
     
    }

}