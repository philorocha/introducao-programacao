#include <stdio.h>
#include <locale.h>

#define GRATIFICACAO 50.00
#define IMPOSTO 0.1

int main() {
    float salario_base, salario_recebido;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe seu salário base: ");
    scanf("%f", &salario_base);

    salario_recebido = (salario_base - salario_base * IMPOSTO) + GRATIFICACAO;

    printf("Salário a receber: %.2f\n", salario_recebido);
    return 0;
}
