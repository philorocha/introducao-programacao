#include <stdio.h>
#include <locale.h>

int main()
{
    float horas_trabalhadas, salario_minimo, salario_bruto, valor_hora, imposto, salario_receber;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    printf("Informe o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);

    valor_hora = salario_minimo * 0.05;
    salario_bruto =  horas_trabalhadas * valor_hora;

    imposto = salario_bruto * 0.03;

    salario_receber = salario_bruto - imposto;

    printf("O salário a receber é: %.2f\n", salario_receber);

    return 0;
}
