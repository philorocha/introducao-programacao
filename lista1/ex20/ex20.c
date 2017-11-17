#include <stdio.h>
#include <locale.h>

int main() {
    float altura_degrau, altura_desejada;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe a altura de cada degrau: ");
    scanf("%f", &altura_degrau);

    printf("Informe a altura que deseja alcançar: ");
    scanf("%f", &altura_desejada);

    printf("Você deve subir %f degraus para chegar na altura desejada.\n", altura_desejada / altura_degrau);
    return 0;
}
