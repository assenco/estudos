#include <stdio.h>

int main(void) {
    int num [10];
    int num2[10];
    int c=0;

    for (int i=0; i<10; i++) {
        num2[i]=0;
    }

    for (int i=0; i<10; i++) {
        printf("Digite um numero\n");
        scanf("%d", &num[i]);
    }

    for (int i=0; i<10; i++) {
        if (num[i]>0) {
            num2[c]=num[i];
            c++;
        }
    }

    for (int i=0; i<10; i++) {
        printf("[%d]", num2[i]);
    }
    return 0;
}