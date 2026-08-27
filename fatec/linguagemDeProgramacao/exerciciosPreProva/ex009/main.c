#include <stdio.h>

//Maior valor de uma matriz

int main(void) {
    int matriz[5][5];
    int maior=0;

    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            printf("Digite o %d valor da %d linha:\n", j+1, i+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            if (matriz[i][j]>maior) maior=matriz[i][j];
        }
    }

    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            if (matriz[i][j]==maior) printf("O maior e %d na linha %d coluna %d", maior, i+1, j+1);
        }
    }

    return 0;
}
