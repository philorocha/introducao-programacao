#include <stdio.h>
#include <locale.h>

int main()
{
	char nome[60], sexo;
	int idade, i;

	for (i = 0; i < 20; i++) {
		printf("Digite seu nome: ");
		fflush(stdin);
		gets(nome);
		printf("Digite sua idade: ");
		scanf("%d", &idade);
		printf("Informe seu sexo (m ou f): ");
		fflush(stdin);
		scanf("%c", &sexo);

		if ((sexo == 'm' || sexo == 'M') && idade > 21) {
			printf("%s\n", nome);
		}
	}

	return 0;
}
