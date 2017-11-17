#include <stdio.h>
#include <locale.h>

int main()
{
	float numero;

	setlocale(LC_ALL, "Portuguese");
	printf("Informe um número: ");
	scanf("%f", &numero);

	if (numero >= 20 && numero <= 90) {
		printf("O número está entre 20 e 90\n");
	} else {
		printf("O número não está entre 20 e 90\n");
	}

	return 0;
}
