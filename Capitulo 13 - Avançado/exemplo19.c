#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main(void) {

    setlocale(LC_ALL, "");
    wchar_t caractere = L'\u00A9';
    wchar_t texto[30] = L"Meu Caractere Longo = \u00F1";

    wprintf(L"Marca Registrada: \u00A9 ou \u00AE \n");
    wprintf(L"Caractere %lc \n", caractere);
    wprintf(L"%ls \n", texto);

    return 0;
}