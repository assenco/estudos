#include <stdio.h>

int main(void) {
    int num;
    printf("Digite um numero de 1 a 10\n");
    scanf("%d", &num);

    for (int i=1; i<= 10; i++) {
    printf("%d x %d = %d\n", num, i, num*i);
    }
    return 0;
}