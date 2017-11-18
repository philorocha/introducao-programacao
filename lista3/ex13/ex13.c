#include <stdio.h>
#include <locale.h>

int main()
{
    int numero, count = 0, soma = 0;

    setlocale(LC_ALL, "Portuguese");
    do {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero > 0) {
            soma += numero;
            count++;
        }
    } while (numero > 0);

    printf("A média dos números digitados é: %.2f\n", soma / (float) count);
    return 0;
}