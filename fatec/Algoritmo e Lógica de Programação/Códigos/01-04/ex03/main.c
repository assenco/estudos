#include <stdio.h>

int main(void) {
    int somai=0, n, somap=0, soma=0;
    while (soma<500){
        printf("Digite um valor: \n");
        scanf("%d", &n);

        soma += n;

        if (n % 2 == 0) {
            somap += n;
        }

        else {
            somai += n;
        }

    }
    printf("O valor eh: %d \n", soma);
    printf("a soma dos pares eh: %d \n", somap);
    printf("a soma dos impares eh: %d \n", somai);
    return 0;
}