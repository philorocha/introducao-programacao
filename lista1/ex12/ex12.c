#include <stdio.h>
#include <locale.h>

#define GRATIFICACAO 0.05
#define IMPOSTO 0.07

int main() {
    float salario_base, salario_recebido;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe seu saláio base: ");
    scanf("%f", &salario_base);

    salario_recebido = (salario_base + salario_base * GRATIFICACAO) - (salario_base * IMPOSTO);

    printf("Salário a receber: %.2f\n", salario_recebido);
    return 0;
}
