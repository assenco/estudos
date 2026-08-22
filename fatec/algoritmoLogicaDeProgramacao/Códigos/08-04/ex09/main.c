#include <stdio.h>

int main(void) {
    int n, fatorial = 1, i=1;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    if (n<0) {
        printf("Numero negativo nao tem fatorial\n");
        return 0;
    }

    do {
        fatorial = fatorial * i;
        i++;
    }while (i<=n);
    printf("O Fatorial e:%d", fatorial);
    return 0;
}