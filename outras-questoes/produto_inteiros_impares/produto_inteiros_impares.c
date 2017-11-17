/* Escreva um programa que calcule e imprima
 * o produto dos inteiros ímpares de 1 a 15 */

#include <stdio.h>

int main()
{
	int i = 1, produto = 1;

	for (; i <= 15; i++) {
		if (i % 2 != 0) produto *= i;
	}

	printf("O produto dos inteiros ímpares de 1 até 15 é: %d\n", produto);
	return 0;
}
