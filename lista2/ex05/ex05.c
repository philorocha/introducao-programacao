#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float salario_bruto, valor_prestacao;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe o valor do salário bruto e o valor da parcela: ");
    scanf("%f%f", &salario_bruto, &valor_prestacao);

    if (valor_prestacao > salario_bruto * 0.3) {
        printf("O empréstimo não pode ser concedido\n");
    } else {
        printf("Empréstimo aprovado!\n");
    }

    return 0;
}
