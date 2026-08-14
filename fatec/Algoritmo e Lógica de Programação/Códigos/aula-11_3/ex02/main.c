#include <stdio.h>

int main(void) {
    int idade;
    double salario;
    char nome[51];
    printf("Digite o nome da pessoa: \n");
    scanf("%s", nome);
    printf("Digite a idade da pessoa: \n");
    scanf("%d", &idade);
    printf("Digite o salario da pessoa: \n");
    scanf("%lf", &salario);
    printf("nome da pessoa: %s \n", nome);
    printf("idade da pessoa: %d \n", idade);
    printf("salario da pessoa: %.2lf \n", salario);
    return 0;
}