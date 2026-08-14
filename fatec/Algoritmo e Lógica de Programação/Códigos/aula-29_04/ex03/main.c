#include <stdio.h>

int main(void) {
    int vetorA[10]={0}, vetorB[10]={0}, vetorC[10]={0};
    int par=0, impar=0;
    for (int i=0;i<10;i++) {
        printf("Digite um numero diferente de 0:\n");
        scanf("%d", &vetorA[i]);
        if (vetorA[i]==0) {
            i--;
            continue;
        }

        if (vetorA[i] % 2 == 0) {
            vetorB[par] = vetorA[i];
            par++;
        }else {
            vetorC[impar] = vetorA[i];
            impar++;
        }
    }

    for (int i=0;i<10;i++) {
        printf("[%d] ", vetorA[i]);
    }
    printf("\n");
    for (int i=0;i<10;i++) {
        printf("[%d] ", vetorB[i]);
    }
    printf("\n");
    for (int i=0;i<10;i++) {
        printf("[%d] ", vetorC[i]);
    }
    return 0;
}