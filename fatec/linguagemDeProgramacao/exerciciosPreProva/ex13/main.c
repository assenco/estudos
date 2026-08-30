#include <stdio.h>
#include <string.h>

//Copia com limite de caractere

int main(void) {

    char string1[10];
    int n;
    char string3[10];

    printf("Digite a primera string:\n");
    scanf("%s", string1);

    printf("Digite o numero:\n");
    scanf("%d", &n);

    strncpy(string3, string1, n);

    printf("%s", string3);
    return 0;
}
