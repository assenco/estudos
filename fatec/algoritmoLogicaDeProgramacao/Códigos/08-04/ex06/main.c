#include <stdio.h>

int main(void) {
    int n, soma=0;
    printf("Digite um numero positivo que deseja somar:\n");
    scanf("%d", &n);

    soma+=n;

    while(1) {
        printf("Digite mais um numero positivo que deseja somar:\n");
        printf("Se desejar parar a soma digite qualquer numero negativo\n");
        scanf("%d", &n);
        if (n>=0) {
            soma+=n;
        }else {
            printf("A soma e igual a: %d", soma);
            return 0;
        }

    }
}