#include <stdio.h>
#include <locale.h>

int main() {
    float nota1, nota2, nota3, peso1, peso2, peso3, media;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe a primeira nota e seu peso: ");
    scanf("%f%f", &nota1, &peso1);

    printf("Informe a segunda nota e seu peso: ");
    scanf("%f%f", &nota2, &peso2);

    printf("Informe a terceira nota e seu peso: ");
    scanf("%f%f", &nota3, &peso3);

    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("A média é: %f\n", media);
    return 0;
}
