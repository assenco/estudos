#include <stdio.h>

int main(void) {

    int v1[5], v2[5], v3[10];

    for (int i=0; i<5; i++) {
        printf("Digite um numero:\n");
        scanf("%d", &v1[i]);
    }

    for (int i=0; i<5; i++) {
        printf("Digite um numero:\n");
        scanf("%d", &v2[i]);
    }

    for (int i=0; i<5; i++) {
        v3[2*i]=v1[i];
        v3[2*i+1]=v2[i];
    }

    for (int i=0; i<5; i++) {
        printf("[%d]", v1[i]);
    }
    printf("\n");
    for (int i=0; i<5; i++) {
        printf("[%d]", v2[i]);
    }
    printf("\n");
    for (int i=0; i<10; i++) {
        printf("[%d]", v3[i]);
    }
    return 0;
}