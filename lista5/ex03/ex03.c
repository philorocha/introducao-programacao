#include <stdio.h>
#include <locale.h>

void dec2bin(int num);

int main()
{
    int n;

    setlocale(LC_ALL, "Portuguese");
    printf("Informe o número que deseja converter em binário: ");
    scanf("%d", &n);

    dec2bin(n);
    return 0;
}

void dec2bin(int num)
{
    int i = num % 2;

    if (num / 2 != 0) dec2bin(num / 2);

    printf("%d", i);
}