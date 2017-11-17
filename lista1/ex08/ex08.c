#include <stdio.h>
#include <locale.h>

int main() {
    float nota1, nota2, nota3, media;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe 3 notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("A média aritmetica é: %f", media);
    return 0;
}
