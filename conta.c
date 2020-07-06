#include <stdio.h>
#include <stdlib.h>

int     letras_diferentes(char[], int);

int main()
{
    const char teste[5][30] =
    {
        "teste",
        "palavra",
        "aaaaaaaaaaaaaaaab",
        "a",
        "abcdeabcdeabcdeabcdeabcdeabcd" // 29 letras
    };
    for (int i = 0; i < 5; i = i + 1)
        printf("'%s': %d letras diferentes\n",
            teste[i],
            letras_diferentes(teste[i], strlen(teste[i]))
        );
    return 0;
};  // main()

int     letras_diferentes(char palavra[], int tam)
{
    char tabela[256] = { 0 };
    for (int i = 0; i < tam; i += 1) tabela[palavra[i]] += 1; // conta a letra
    int n = 0;
    for (int i = 0; i < 256; i += 1) if (tabela[i] != 0) n = n + 1; // esse tinha
    return n;
};

//  fim ch 1465320