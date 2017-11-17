#include <stdio.h>

int main()
{
	int quantidade, numero, menor_numero, i;

	scanf("%d", &quantidade);
	
	if (quantidade) {
		scanf("%d", &menor_numero);
		quantidade--;
		
		for (i = 0; i < quantidade; i++) {
			scanf("%d", &numero);
			if (numero < menor_numero) {
				menor_numero = numero;
			}
		}

		printf("%d\n", menor_numero);
	}

	
	return 0;
}

