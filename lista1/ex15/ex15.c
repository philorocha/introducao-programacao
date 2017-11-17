#include <stdio.h>
#include <locale.h>

int main() {
    float base, altura, area;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe a base e altura do triângulo: ");
    scanf("%f%f", &base, &altura);

    area = (base * altura) / 2;

    printf("A área do triângulo é: %.f", area);
    return 0;
}
