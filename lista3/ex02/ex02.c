#include <stdio.h>
#include <locale.h>

int main()
{
    int n, i, j;
    
    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                printf("%d-%d\t", i, j);   
            } else {
                printf("\t");
                continue;
            }
        }
        printf("\n");
    }
    return 0;
}

