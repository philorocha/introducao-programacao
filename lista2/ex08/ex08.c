#include <stdio.h>
#include <locale.h>

int main()
{
	int num1, num2;

	setlocale(LC_ALL, "Portuguese");
	printf("Informe dois números inteiros: ");
	scanf("%d %d", &num1, &num2);

	if (num1 < num2) {
		printf("%d %d\n", num1, num2);
	} else {
		printf("%d %d\n", num2, num1);
	}

	return 0;
}
