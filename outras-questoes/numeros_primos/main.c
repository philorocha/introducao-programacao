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
    int i, res = 1;

    for (i = 2; i < numero; i++) {
        if (numero % i == 0) {
            res = 0;
            break;
        }
    }

    return res;
}
