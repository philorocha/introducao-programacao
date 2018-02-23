#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    //Declaração da mascara para senha e da variavel que vai armazenar a senha
    char password_mask[100], password[100];
    //'Limpeza' das variaveis caso exista alguma 'sujeira'
    strcpy(password_mask, "");
    strcpy(password, "");
    //inicializacao da condicao do while e contador que irá percorrer o vetor password adicionando os caracteres
    int i = 1, j = 0;
    //variavel que ira receber ' caracter por vez
    char ch;

    while (i) {
        //pega o caracter digitado
        ch = getche();
        //limpa a tela
        system("cls");
        //se o caracter digitado for difente de enter
        if (ch != '\n' && ch != '\r') {
            //variavel password na posicao j recebe o valor de ch
            password[j] = ch;
            //incremeta a variavel que determina a posicao no vetor
            j++;
            //concatena com strcat um *
            strcat(password_mask, "*");
            //imprime o * no lugar do que o usuario digitou
            printf("%s", password_mask);
        } else {
            //senao insere o caracter de final de string
            password[j] = '\0';
            //seta a condicao do while para 0 para sair
            i = 0;
        }
    }

    //imprime a senha
    printf("Sua senha: %s\n", password);
    return 0;
}
