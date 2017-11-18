#include <stdio.h>
#include <locale.h>

int main()
{
	int n, i, j;

	printf("Digite um numero inteiro maior que 1: ");
	scanf("%d", &n);

	for (i = 1; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i > 0 && j < i) {
				printf("%d-%d", i, j);
			} else {
				break;
			}
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}
