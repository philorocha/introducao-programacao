#include <stdio.h>
#include <locale.h>

int main() {
    float valor_deposito, taxa_juros, rendimento, valor_total;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe o valor do depósito: ");
    scanf("%f", &valor_deposito);

    printf("Informe o valor da taxa de juros: ");
    scanf("%f", &taxa_juros);

    rendimento = valor_deposito * (taxa_juros / 100);
    valor_total = valor_deposito + rendimento;

    printf("O rendimento é de %.2f\nE o valor somado ao rendimento é: %.2f\n", rendimento, valor_total);
    return 0;
}
