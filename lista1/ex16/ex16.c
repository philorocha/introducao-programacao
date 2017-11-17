#include <stdio.h>
#include <math.h>
#include <locale.h>

#define PI 3.1415

int main() {
    double raio;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe o raio do círculo: ");
    scanf("%lf", &raio);

    printf("A área do círculo é: %lf\n", PI * pow(raio, 2));
    return 0;
}
