#include <stdio.h>
#include <locale.h>

int main()
{
    int limite_inferior, limite_superior, numero, i;

    setlocale(LC_ALL, "Portuguese");
    do {
        printf("Informe o limite inferior: ");
        scanf("%d", &limite_inferior);
        printf("Informe o limite superior: ");
        scanf("%d", &limite_superior);
        printf("Informe o número cujo múltiplo deseja que seja impresso: ");
        scanf("%d", &numero);
    } while (limite_inferior > limite_superior);

    limite_inferior++;
    
    for (; limite_inferior < limite_superior; limite_inferior++) {
        if (limite_inferior % numero == 0) {
            printf("%d\t", limite_inferior);
        }
    }
    
    return 0;
}