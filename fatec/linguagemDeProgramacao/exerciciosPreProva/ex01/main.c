#include <stdio.h>

int main(void) {
    int vetor[10];
    int total=0;

    for (int i=0;i<10;i++) {
        printf("Digite o %d valor\n", i+1);
        scanf("%d", &vetor[i]);
        total+=vetor[i];
    }
    for (int i=0;i<10;i++) {
        printf("%d ", vetor[i]);
    }
    printf("= %d", total);
    return 0;
}