#include <stdio.h>
#include <locale.h>

int main()
{
    int opcao;

    setlocale(LC_ALL, "Portuguese");
    do {
        printf("BOAS VINDAS:\n1 - Imprimir \"Olá!\";\n");
        printf("2 - Imprimir \"Bem Vindo!\";\n3 - Sai do algoritmo;\n");
        printf("OPCAO ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Olá!\n");
                break;
            case 2:
                printf("Bem vindo!\n");
                break;
            case 3:
                break;
        }
    } while (opcao != 3);
    return 0;
}