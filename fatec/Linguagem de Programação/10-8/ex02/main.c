#include <stdio.h>

int main(void) {
    int base, teto;

    printf("Digite a base:\n");
    scanf("%d", &base);

    printf("Digite o teto:\n");
    scanf("%d", &teto);

    for (int i=base; i<=teto; i++) {
        if (i%3==0 && base%5==0) {
            printf("pinpon \n");
        } else {
            if(i%3==0) {
                printf("pin \n");
            }else if (i%5==0) {
                printf("pon \n");
            } else
                printf("%d\n", i);

        }
        return 0;
    }