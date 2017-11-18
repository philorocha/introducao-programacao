#include <stdio.h>
#include <locale.h>

int main()
{
    int numero = -1;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite um número: ");
    scanf("%d", &numero);
    
    while (numero != 0) {
        printf("O triplo de %d é %d\n", numero, numero * 3);
        printf("Digite um número: ");
        scanf("%d", &numero);
    }
    return 0;
}