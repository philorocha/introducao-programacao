#include <stdio.h>

int main()
{
    int linha, caracteres, espaco;

    for (linha = 1; linha <= 10; linha++) {
        for (caracteres = 1; caracteres <= linha; caracteres++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");

    for (linha = 1; linha <= 10; linha++) {
        for (caracteres = 10; caracteres >= linha; caracteres--){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (linha = 1; linha <= 10; linha++) {
        for (caracteres = 10; caracteres >= linha; caracteres--){
            printf("*");
        }
        printf("\n");
        for (espaco = 1; espaco <= linha; espaco++) {
            printf(" ");
        }
    }

    printf("\n");

    for (linha = 1; linha <= 10; linha++) {
        for (espaco = 9; espaco >= linha; espaco--) {
            printf(" ");
        }
        for (caracteres = 1; caracteres <= linha; caracteres++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}