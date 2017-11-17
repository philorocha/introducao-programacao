#include <stdio.h>
#include <locale.h>

int main() {
    int numero1, numero2;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe dois números inteiros: ");
    scanf("%d%d", &numero1, &numero2);

    printf("Soma %d", numero1 + numero2);
    return 0;
}
