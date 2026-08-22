#include <stdio.h>

int main(void) {
    double salario = 5000.0;
    double percentual = 0.05;
    double aumento = salario + percentual;
    double novoSalario = salario + aumento;

    printf("Novo salario R$ %.21f \n" novoSalario);
    return 0;
}