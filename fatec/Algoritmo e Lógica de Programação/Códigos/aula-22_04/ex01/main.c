#include <stdio.h>

int main(void) {
    double nota[6];
#define TAM 8
    for (int i = 1 ; i < TAM ; i++) {
        printf("Digite a %d nota:\n", i);
        scanf("%lf", &nota[i]);
    }

    for (int i = 1 ; i < TAM ; i++) {
        printf("[%.2lf]", nota[i]);
    }
    return 0;
}