#include <stdio.h>

//Vetor de numeros negativos

int main(void) {
    int vetor[12];

    for (int i=0;i<12;i++) {
        printf("Digite o %d valor:\n", i+1);
        fflush(stdin);
        scanf("%d", &vetor[i]);
    }

    for (int i=0;i<12;i++) {
        if (vetor[i]<0) vetor[i]=0;
        printf("|%d| ", vetor[i]);
    }

    return 0;
}
