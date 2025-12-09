#include <stdio.h>

int main() {

    int i, vogais = 0;
    char str[100];
    printf("Digite uma String: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != 0; i++) {
    
        switch (str[i]) {
        case 'a': vogais++; break;
        case 'e': vogais++; break;
        case 'i': vogais++; break;
        case 'o': vogais++; break;
        case 'u': vogais++; break;
        default: break;
        }
    }
    
    printf("Sua string tem: %d, Vogais!\n", vogais);

    return 0;
}