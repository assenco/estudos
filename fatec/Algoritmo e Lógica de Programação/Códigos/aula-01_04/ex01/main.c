#include <stdio.h>

int main(void) {
    int soma=0, n;
    while (soma<500){
    printf("Digite um valor: \n");
    scanf("%d", &n);
    soma =+ n; //soma = soma + n
}
    printf("O valor eh: %d \n", soma);
    return 0;
}