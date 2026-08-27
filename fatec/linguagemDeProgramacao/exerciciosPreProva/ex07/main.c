#include <stdio.h>

//Diagonal principal

int main(void) {
    int matriz[4][4];

    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            printf("Digite o %d valor da %d linha:\n", j+1, i+1);
            scanf("%d", &matriz[j][i]);
        }
    }

    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            if (j==i) printf("|%d|", matriz[j][i]);
            else printf("|0|");
        }
        printf("\n");
    }
    return 0;
}
