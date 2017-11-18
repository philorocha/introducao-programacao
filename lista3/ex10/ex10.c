#include <stdio.h>
#include <locale.h>

int main()
{
    int excelente = 0, bom = 0, regular = 0, idade, idades = 0, i, opcao;

    setlocale(LC_ALL, "Portuguese");

    for (i = 0; i < 20; i++) {
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        do {
            printf("Qual sua opinião sobre o filme?: \n");
            printf("1 - REGULAR\n2 - BOM\n3 - EXCELENTE\nOPÇÃO: ");
            scanf("%d", &opcao);

            switch (opcao) {
                case 1:
                    ++regular;
                    break;
                case 2:
                    ++bom;
                    break;
                case 3:
                    ++excelente;
                    idades += idade;
                    break;
                default:
                    printf("Opção inválida\n");
            }
        } while (opcao < 1 || opcao > 3);
    }

    if (excelente != 0)
        printf("A média das idades das pessoas que responderam excelente é: %d\n", idades / excelente);
    printf("A quantidade de pessoas que responderam regular foi: %d\n", regular);
    printf("A percentagem de pessoas que responderam bom entre todos os expectadores analisados: %.1f %%", (bom * 100.0)/20);
    return 0;
}