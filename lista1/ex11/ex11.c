#include <stdio.h>
#include <locale.h>

int main() {
    float salario_funcionario, percentual_aumento, valor_aumento, novo_salario;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe o salário: ");
    scanf("%f", &salario_funcionario);

    printf("Informe o percentual de aumento: ");
    scanf("%f", &percentual_aumento);

    valor_aumento = salario_funcionario * (percentual_aumento / 100);
    novo_salario = salario_funcionario + valor_aumento;

    printf("O valor do aumento é: %.2f, e o novo salário é: %.2f", valor_aumento, novo_salario);
    return 0;
}
