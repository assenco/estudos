#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int palpite, contador = 0;
    srand( time(NULL));
    int magico = (rand() % 5) + 1;

    while (1) {
        printf("Digite o palpite:\n");
        scanf("%d", &palpite);
        contador++;
        if (palpite == magico) {
            printf("Parabens\n");
            return 0;
        }

        if (contador==2) {
            printf("Acabou as chances\n");
            printf("O numero era: %d", magico);
            return 0;}

        if(palpite < magico) {
            printf("Palpite esta baixo\n");
        }else {
            printf("Palpite esta alto\n");
        }
    }
    return 0;
}