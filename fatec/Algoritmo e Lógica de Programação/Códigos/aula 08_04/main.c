#include <stdio.h>

int main(void) {
    double base, altura, area, perimetro;

    printf("Digite a base do retangulo:\n");
    scanf("%lf", &base);
    fflush(stdin);
    printf("Digite  a altura do retangulo:\n");
    scanf("%lf", &altura);

    perimetro = (base * 2) + (altura * 2);
    area = base * altura;

    printf("O perimetro e: %lf\n", perimetro);
    printf("A area e: %lf\n", area);
    return 0;
}