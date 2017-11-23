#include <stdio.h>
#include <locale.h>

float media(float nota1, float nota2, float nota3);

int main()
{
	float nota_1, nota_2, nota_3;
	int numero_alunos;

	printf("Informe a quantidade de alunos: ");
	scanf("%d", &numero_alunos);

	while (numero_alunos != 0) {
		printf("Informe 3 notas: ");
		scanf("%f %f %f", &nota_1, &nota_2, &nota_3);
		printf("Sua média é: %.2f\n", media(nota_1, nota_2, nota_3));
		numero_alunos--;
	}
	return 0;	
}

float media(float nota1, float nota2, float nota3)
{
	return (nota1 + nota2 + nota3) / 3;
}

