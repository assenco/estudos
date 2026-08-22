#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Digite o valor de a: \n");
    scanf("%d", &a);
    printf("Digite o valor de b: \n");
    scanf("%d", &b);
    printf("Digite o valor de c: \n");
    scanf("%d", &c);

    a = a + b * c;

    printf("O valor da expressao e: %d\n", a);
    return 0;
}