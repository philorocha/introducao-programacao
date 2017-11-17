#include <stdio.h>
#include <locale.h>

int main() {
    int ano_nascimento, ano_atual, idade, idade_2020;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe seu ano de nascimento e o ano atual: ");
    scanf("%d%d", &ano_nascimento, &ano_atual);

    idade = ano_atual - ano_nascimento;

    idade_2020 = idade + (2020 - ano_atual);

    printf("Sua idade é: %d e você terá %d anos em 2020\n", idade, idade_2020);

    return 0;
}
