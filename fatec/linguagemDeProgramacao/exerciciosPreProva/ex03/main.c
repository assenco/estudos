#include <stdio.h>

//Inverter valores de vetor

int main(void) {
    int vetor1[15];
    int vetor2[15];

    for (int i=0;i<15;i++) {
        printf("Digite o %d valor:\n", i+1);
        scanf("%d", &vetor1[i]);
    }
    for (int i=14, j=0;i>=0;i--, j++) {
        vetor2[j]=vetor1[i];
    }
    for (int i=0;i<15;i++) {
        printf("|%d| ", vetor1[i]);
    }
    printf("\n");
    for (int i=0;i<15;i++) {
        printf("|%d| ", vetor2[i]);
    }
    return 0;
}
