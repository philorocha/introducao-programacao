#include <stdio.h>
#include <locale.h>

int main()
{
    int n, numero, i = 0, menor, maior;

    setlocale(LC_ALL, "Portuguese");
    do {
        printf("Informe a quantidade N de números: ");
        scanf("%d", &n);
    } while (n < 2);


    while (i < n) {
        printf("Informe o %dº número: ", i + 1);
        scanf("%d", &numero);
        
        if (i == 0) {
            menor = numero;
            maior = numero;
        } else if (numero < menor) {
            menor = numero;
        } else if (numero > maior) {
            maior = numero;
        }
        i++;
    }

    printf("O menor número é %d\nE o maior número é %d", menor, maior);
    return 0;
}