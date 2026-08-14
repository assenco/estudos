#include <stdio.h>

int main(void) {
    double cotacao, dolar, real;
    printf("diga a cotacao atual do dolar: \n");
    scanf("%lf", &cotacao);
    printf("Digite a quantidade de dolares que voce possui \n");
    scanf("%lf", &dolar);

    real = cotacao * dolar;

    printf("Voce possui: %lf\n", real);
    return 0;
}