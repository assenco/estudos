#include <stdio.h>
#include "calculadora.h"

int main(void) {
    int x, y;
    printf("Digite o primeiro valor:\n");
    scanf("%d", &x);

    printf("Digite o segundo valor:\n");
    scanf("%d", &y);

    printf("%d", somar(a:x, b:y));
    return 0;
}
