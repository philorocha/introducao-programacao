/* Escreva um programa que calcule e imprima
 * a soma dos inteiros pares de 2 a 30 */
#include <stdio.h>

int main()
{
	int i = 2, soma = 0;

	for (; i <= 30; i++) {
		if (i % 2 == 0) soma += i;
	}

	printf("A soma dos inteiros pares de 2 à 30 é: %d\n", soma);
	return 0;
}
