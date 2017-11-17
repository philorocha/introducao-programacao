#include <stdio.h>
#include <stdlib.h>

int main()
{
	char nome[30];
	
	/* freopen: http://devdocs.io/c/io/freopen
	 * responsável pela abertura/criação do arquivo.
	 * O a+ significa que o que será digitado vai 
	 * sendo acrescentado ao final do arquivo.
	 * stdout significa o fluxo de arquivo que será
	 * alterado, no caso o arquivo clientes.txt */
	freopen("clientes.txt", "a+", stdout);

	fflush(stdin);
	gets(nome);

	/* fprintf: http://devdocs.io/c/io/fprintf 
	 * responsável por escrever no arquivo */
	fprintf(stdout, "%s\n", nome);

	/* fclose: http://devdocs.io/c/io/fprintf 
	 * fecha o fluxo de arquivos stdout */
	fclose(stdout);

	return 0;
}
