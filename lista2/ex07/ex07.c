#include <stdio.h>
#include <locale.h>

int main()
{
	char nome[30], sexo;
	int idade;

	setlocale(LC_ALL, "Portuguese");
	printf("Informe seu nome: ");
	fflush(stdin);
	gets(nome);

	printf("Informe seu sexo (M ou F): ");
	scanf("%c", &sexo);

	printf("Informe sua idade: ");
	scanf("%d", &idade);

	if ((sexo == 'f' || sexo == 'F') && idade < 25) {
		printf("ACEITA\n");
	} else {
		printf("%s\n", nome);
		printf("NÃO ACEITA\n");
	}
	return 0;
}
