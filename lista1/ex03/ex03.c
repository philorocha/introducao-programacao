#include <stdio.h>
#include <locale.h>

int main() {
    int num1, num2;

    setlocale(LC_ALL, "Portuguese");
    printf("informe 2 números inteiros: ");
    scanf("%d%d", &num1, &num2);
    printf("%d %d\n", num1, num2);
    return 0;
}
