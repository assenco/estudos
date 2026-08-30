#include <stdio.h>

//Multiplicacao de uma matriz por um escalar

int main(void) {

    int matriz1[2][2];
    int matriz2[2][2];
    int esc;

    for (int i=0;i<2;i++) {
        for (int j=0;j<2;j++) {
            printf("Digite um numero:\n");
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite a escalar:\n");
    scanf("%d", &esc);

    for (int i=0;i<2;i++) {
        for (int j=0;j<2;j++) {
            matriz2[i][j] = matriz1[i][j] * esc;
        }
    }

    for (int i=0;i<2;i++) {
        for (int j=0;j<2;j++) {
            printf("|%d|", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\n----------------------------\n");

    for (int i=0;i<2;i++) {
        for (int j=0;j<2;j++) {
            printf("|%d|", matriz2[i][j]);
        }
        printf("\n");
    }

return 0;
}
