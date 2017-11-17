#include <stdio.h>
#include <locale.h>

int main() {
    int num1, num2, num3, num4, soma;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe quatro números inteiros: ");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    soma = num1 + num2 + num3 + num4;

    printf("%d", soma);
    return 0;
}
