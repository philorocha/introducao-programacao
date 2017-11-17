#include <stdio.h>
#include <locale.h>

int main() {
    int numero;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe um número inteiro: ");
    scanf("%d", &numero);

    printf("Sucessor: %d\n", numero + 1);
    printf("Antecessor: %d\n", numero - 1);

    return 0;
}
