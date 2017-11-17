#include <stdio.h>
#include <locale.h>

int main()
{
    float preco_fabrica, percentual_lucro, percentual_imposto, preco_final, imposto, lucro_distribuidor;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe o preço de fábrica do veículo: ");
    scanf("%f", &preco_fabrica);

    printf("Informe o percentual de lucro do distribuidor: ");
    scanf("%f", &percentual_lucro);

    printf("Informe o percentual de imposto: ");
    scanf("%f", &percentual_imposto);

    lucro_distribuidor = preco_fabrica * (percentual_lucro / 100);
    imposto = preco_fabrica * (percentual_imposto / 100);

    preco_final = preco_fabrica + lucro_distribuidor + imposto;

    printf("O lucro do distribuidor é: R$ %.2f\n", lucro_distribuidor);
    printf("O valor dos impostos é: R$ %.2f\n", imposto);
    printf("O preco final do veículo é: R$ %.2f\n", preco_final);

    return 0;
}
