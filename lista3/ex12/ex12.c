#include <stdio.h>
#include <locale.h>

int main()
{
    int numero, count = 0;

    setlocale(LC_ALL, "Portuguese");
    do {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero > 0) count++;
    } while (numero > 0);

    printf("Foram digitados %d números.\n", count);
    return 0;
}