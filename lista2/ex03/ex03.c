#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num1, num2, soma;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe dois números inteiros: ");
    scanf("%d%d", &num1, &num2);

    soma = num1 + num2;

    if (soma > 10) {
        printf("%d\n", soma);
    }
    return 0;
}
