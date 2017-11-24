#include <stdio.h>
#include <stdlib.h>

int primo(int numero);

int main()
{
    int i;

    for (i = 1; i <= 1000; i++) {
        if (primo(i) == 1) {
            printf("%d\n", i);
        }
    }
    return 0;
}


int primo(int numero){
    int divisores = 1, i;

    for (i = 2; i <= numero; i++) {
        if (numero % i == 0) {
            divisores++;
            if (divisores > 2) break;
        }
    }

    if (divisores == 2) {
        return 1;
    }

    return 0;
}
