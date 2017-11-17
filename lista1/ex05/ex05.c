#include <stdio.h>
#include <locale.h>

int main() {
    char nome[60], endereco[150], telefone[20];

    setlocale(LC_ALL, "Portuguese");
    printf("Informe seu nome: ");
    fflush(stdin);
    gets(nome);

    printf("Informe seu endereço: ");
    fflush(stdin);
    gets(endereco);

    printf("Informe seu telefone: ");
    fflush(stdin);
    gets(telefone);

    printf("Olá %s, seu endereco: %s e seu telefone: %s\n", nome, endereco, telefone);
    return 0;
}
