#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float num1, num2, soma;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe dois números: ");
    scanf("%f%f", &num1, &num2);

    soma = num1 + num2;

    if (soma > 20) {
        printf("%.2f\n", soma + 8);
    } else {
        printf("%.2f\n", soma - 5);
    }
    return 0;
}
