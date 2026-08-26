#include <stdio.h>

//Maior e Menor valor

int main(void) {
    int vetor[8];
    int maior=0, menor=0;

    for (int i=0;i<8;i++) {
        printf("Digite o %d valor:", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i=0;i<8;i++) {
        if (vetor[i]>maior) {
            maior=vetor[i];
        }
    }

    menor=vetor[0];
    for (int i=0;i<8;i++) {
        if (vetor[i]<menor) {
            menor=vetor[i];
        }
    }

    for (int i=0;i<8;i++) {
        printf("%d  ", vetor[i]);
    }
    printf("\n");
    printf("O menor e: %d\n", menor);
    printf("O maior e: %d\n", maior);

    return 0;
}
