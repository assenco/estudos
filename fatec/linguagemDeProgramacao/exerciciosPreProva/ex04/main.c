#include <stdio.h>

//Contagem de pares e impares

int main(void) {
    int vetor[20];
    int par=0;
    int impar=0;

    for (int i=0;i<20;i++) {
        printf("Digite o %d valor:\n", i+1);
        scanf("%d", &vetor[i]);
        if (vetor[i]%2==0) par+=1;
        else impar+=1;
    }

    for (int i=0;i<20;i++) {
        printf("|%d| ", vetor[i]);
    }
    printf("\n");
    printf("Quantidade de pares: %d\n", par);
    printf("Quantidade de impares: %d\n", impar);

    return 0;
}
