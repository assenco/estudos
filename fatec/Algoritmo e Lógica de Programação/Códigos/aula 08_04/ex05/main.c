#include <stdio.h>

int main(void) {
    int n, i=1, soma=0;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);
    while (i<=n) {

        if (i%2==0) {
            soma+= i;
        }
        i++;
    }
    printf("A soma e: %d", soma);
    return 0;
}