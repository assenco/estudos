#include <stdio.h>

int main(void) {
    int tent, senha, i=1;
    senha = 1234;

    do {
        printf("Digite sua tentativa:\n");
        scanf("%d", &tent);

        if (tent==senha) {
            printf("Parabens!!!!!!!\n");
            return 0;
        }else {
            printf("Tente novamente\n");
        }
        i++;
    }while (i<=3);
        return 0;
}