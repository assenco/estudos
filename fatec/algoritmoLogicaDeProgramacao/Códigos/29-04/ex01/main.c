#include <stdio.h>

int main(void) {
    int vA[10], vB[10];
    int b;

    b=9;

    for (int i = 0; i <10; i++) {
        printf("Digite um numero:\n");
        scanf("%d", &vA[i]);
    }

    for (int i = 0; i <10; i++) {
        vB[i] = vA[b];
        b--;
    }

    for (int i = 0; i <10; i++) {
        printf("[%d]", vA[i]);
    }

    printf("\n");

    for (int i = 0; i <10; i++) {
        printf("[%d]", vB[i]);
    }
    return 0;
}