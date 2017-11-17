#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int numero, fatorial = 1;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número maior ou igual a 0: ");
    scanf("%d", &numero);

    for (; numero > 0; numero--) {
        fatorial *= numero;
    }

    printf("O fatorial é %d\n", fatorial);
    return 0;
}
