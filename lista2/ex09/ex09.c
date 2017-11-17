#include <stdio.h>
#include <locale.h>

int main()
{
	float numero1, numero2, numero3;

	setlocale(LC_ALL, "Portuguese");
	printf("Informe 3 números diferentes: ");
	scanf("%f %f %f", &numero1, &numero2, &numero3);

	if (numero1 > numero2 && numero1 > numero3) {
		printf("%.2f\n", numero1);
	} else if (numero2 > numero3) {
		printf("%.2f\n", numero2);
	} else {
		printf("%.2f\n", numero3);
	}

	return 0;
}
