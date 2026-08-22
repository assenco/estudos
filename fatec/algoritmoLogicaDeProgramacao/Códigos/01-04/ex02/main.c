#include <stdio.h>

int main(void) {
    int soma=0, n;
    while (soma<500){
        printf("Digite um valor: \n");
        scanf("%d", &n);
        if (n % 2 == 0) {
            soma = soma + n;
        }
    }
    printf("O valor eh: %d \n", soma);
    return 0;
}