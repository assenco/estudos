#include <stdio.h>

int main(void) {
    int tv=0, i, n, v;
        for ( i = 1; i <= 7; i++) {
            printf("Digite o %d tempo:\n", i);
            scanf("%d", &n);
2
            if (n>tv) {
                tv = n;
                v = i;
            }

    }
    printf("O tempo da melhor volta foi: %d:\n", tv);
    printf("A melhor volta foi a %d volta", i);
    return 0;
}