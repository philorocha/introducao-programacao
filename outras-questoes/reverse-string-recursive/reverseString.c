#include <stdio.h>
#include <string.h>

void stringReverse(char str[])
{
    char *ptr = str;

    if (*ptr != '\0') {
        stringReverse(ptr + 1);
    }

    printf("%c", *ptr);
}

int main()
{
    char nome[20];
    strcpy(nome, "Denise");

    stringReverse(nome);
    printf("\n");
    return 0;
}
