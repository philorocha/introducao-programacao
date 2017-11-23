#include <stdio.h>
#include <locale.h>

int main()
{
    int limite_superior, incremento, i;

    do {
        printf("Informe o limite superior: ");
        scanf("%d", &limite_superior);
        printf("Informe o valor do incremento: ");
        scanf("%d", &incremento);
    } while (limite_superior <= 0 || incremento <= 0);

    for (i = 0; i <= limite_superior; i += incremento) {
        printf("%d\t", i);
    }
	
	printf("\n");

    return 0;
}
