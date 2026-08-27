#include <stdio.h>

//Soma de Matrizes

int main(void) {
    int matriz1[3][3];
    int matriz2[3][3];
    int matriz3[3][3];

    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            printf("Digite o %d valor da %d linha:\n", j+1, i+1);
            scanf("%d", &matriz1[i][j]);
        }
    }
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            printf("|%d|", matriz1[i][j]);
        }
        printf("\n");
    }

    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            printf("Digite o %d valor da %d linha:\n", j+1, i+1);
            scanf("%d", &matriz2[i][j]);
        }
    }
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            printf("|%d|", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("-----------------------------------------------\n");

    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            matriz3[j][i]=matriz1[j][i]+matriz1[j][i];
        }
    }
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            printf("|%d|", matriz3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
