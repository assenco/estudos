#include <stdio.h>

int main(void) {
    int soma=0, n;
    char resp = '\0';
    do {
        do {
            printf("Digite um valor [1...20] : \n");
            scanf("%d",&n);
            if(n<0 || n>20) printf("Valor invalido\n");
        } while (n<0 || n>20);
        soma +=n;
        fflush(stdin);
        printf("Digite [s] para continuar:\n");
        resp = getchar();
    } while (resp == 's');
    printf("Soma dos valores validos: %d\n", soma);
    return 0;
}
