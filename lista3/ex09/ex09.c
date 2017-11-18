#include <stdio.h>
#include <locale.h>

int main()
{
    int termo_1, termo_2, i, termo;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe os dois primeiros números da série: ");
    scanf("%d%d", &termo_1, &termo_2);

    for (i = 3; i <= 10; i++) {
        if (i % 2 == 0) {
            termo = termo_1 - termo_2;
        } else {
            termo = termo_1 + termo_2;
        }

        printf("O %dº termo da série é %d\n", i, termo);
        termo_1 = termo_2;
        termo_2 = termo;
    }
    return 0;
}