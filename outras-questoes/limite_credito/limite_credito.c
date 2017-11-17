/* Poupar dinheiro vem se tornando algo cada vez mais difícil
 * de se fazer durante períodos de recessão, de modo que as
 * empresas podem estreitar seus limites de crédito para im-
 * pedir que suas contas a receber (dinheiro devido a elas)
 * se tornem muito grandes. Em resposta a uma recessão pro-
 * longada, uma empresa cortou os limites de crédito de seus
 * clientes pela metade. Assim, se um cliente particular tinha
 * um limite de crédito de R$ 2.000,00, agora ele é de R$ 1.000,00.
 * Se um cliente tinha um limite de R$ 5.000,00, agora é de
 * R$ 2.500,00. Escreva um programa que analise o status de
 * crédito de três clientes dessa empresa. Você receberá as seguintes
 * informações:
 * a) O número de conta do cliente.
 * b) O limite de crédito antes da recessão
 * c) O saldo atual do cliente (ou seja, o valor que o cliente deve à empresa).
 * Seu programa deve calcular e imprimir o novo limite de crédito para cada cliente
 * e deve determinar (e imprimir) quais clientes têm saldo atual superior a seus novos
 * limites de crédito */

#include <stdio.h>
#define QTD_CLIENTES 3
/* Função equivalente à fflush para ambiente unix */
void flush_in()
{
	int ch;

	while ( (ch = fgetc(stdin)) != EOF && ch != '\n') {}
}

int main()
{
	char numero_conta[10];
	float limite_credito_anterior, novo_limite, saldo_atual;
	int i;

	for (i = 0; i < QTD_CLIENTES; i++) {
		printf("Número da conta do Cliente %d: ", i + 1);
		gets(numero_conta);

		printf("Limite de crédito antes da recessão: ");
		scanf("%f", &limite_credito_anterior);

		printf("Saldo atual: ");
		scanf("%f", &saldo_atual);

		novo_limite = limite_credito_anterior / 2;

		printf("o novo limite de crédito do cliente %d é de R$ %.2f\n", i + 1, novo_limite);

		if (saldo_atual > novo_limite) printf("O saldo do cliente %d é superior ao novo limite\n", i + 1);
		flush_in();
	}

	return 0;
}
