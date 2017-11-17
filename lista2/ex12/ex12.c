#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
	char nome[40], categoria[20];
	float peso, altura, imc;

	setlocale(LC_ALL, "Portuguese");
	printf("Informe o seu nome: ");
	fflush(stdin);
	gets(nome);

	printf("Informe seu peso (kg) e altura (m): ");
	scanf("%f %f", &peso, &altura);

	imc = peso / (altura * altura);

	if (imc < 18.5) {
		strcpy(categoria, "Abaixo do Peso");
	} else if (imc < 25) {
		strcpy(categoria, "Peso Normal");
	} else if (imc < 30) {
		strcpy(categoria, "Acima do peso");
	} else {
		strcpy(categoria, "Obesidade");
	}

	printf("%s está com Índice de Massa Corporal %.2f (%s)\n", nome, imc, categoria);
	return 0;
}
