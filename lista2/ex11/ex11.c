#include <stdio.h>
#include <locale.h>

int main()
{
	char nome[30];
	int idade;
	float valor;

	setlocale(LC_ALL, "Portuguese");
	printf("Informe o seu nome: ");
	fflush(stdin);
	gets(nome);
	printf("Informe sua idade: ");
	scanf("%d", &idade);

	if (idade <= 10) {
		valor = 30.00;
	} else if (idade <= 29) {
		valor = 60.00;
	} else if (idade <= 45) {
		valor = 120.00;
	} else if (idade <= 59) {
		valor = 150.00;
	} else if (idade <= 65) {
		valor = 250.00;
	} else {
		valor = 400.00;
	}

	printf("Olá %s, o valor do seu plano será de: %.2f\n", nome, valor);
	return 0;
}
