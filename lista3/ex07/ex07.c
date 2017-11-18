#include <stdio.h>
#include <locale.h>

int main()
{
    int n, numero, i = 0;

    setlocale(LC_ALL, "Portuguese");
    do {
        printf("Informe a quantidade N de números: ");
        scanf("%d", &n);
    } while (n < 1);


    while (i < n) {
        printf("Informe o %dº número: ", i + 1);
        scanf("%d", &numero);
        printf("O triplo de %d é %d\n", numero, numero * 3);
        i++;
    }
    return 0;
}