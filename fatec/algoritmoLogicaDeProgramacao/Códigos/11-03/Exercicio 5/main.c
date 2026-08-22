#include <stdio.h>

int main(void) {
    double media, nota1, nota2;
    printf("Digite a primeira nota: \n");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%lf", &nota2);
    media = (nota1 * 3) + (nota2 * 7)/10;

    printf("A media e iagual a: %lf\n", media);
    return 0;
}