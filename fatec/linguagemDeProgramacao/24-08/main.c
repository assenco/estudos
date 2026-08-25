#include <stdio.h>

int main(void) {
    int num[10];

    printf("Digite os valores\n");
    for (int i=0;i<10;i++) {
        scanf("%d", num[i]);
    }

    for (int i=0;i<10;i++) {
        for (int j=i+1;j<10;j++) {
            if (num[i]>num[j]) {
                int aux=num[i];
                num[i]=num[j];
                num[j]=aux;
            }
        }
    }

    printf("Valores digitados:\n");
    for (int i=0;i<10;i++) {
        printf(" %d |", num[i]);
    }
return 0;
}
