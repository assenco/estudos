#include <stdio.h>
#include "imc.h"

int main(void) {

    double peso, altura;
    printf("Digite o seu peso:\n");
    scanf("%lf", &peso);
    printf("Digite a sua altura:\n");
    scanf("%lf", &altura);

    printf("Seu IMC eh: %.2lf\n", calcularImc(peso, altura));
    return 0;
}
