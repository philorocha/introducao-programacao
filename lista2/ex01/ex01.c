#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a, b;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe dois números inteiros: ");
    scanf("%d%d", &a, &b);

    if (a % b == 0) {
        printf("%d é divisivel por %d", a, b);
    } else {
        printf("%d não é divisivel por %d", a, b);
    }
    return 0;
}
