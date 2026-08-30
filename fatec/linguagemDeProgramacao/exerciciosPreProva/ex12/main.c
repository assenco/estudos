#include <stdio.h>
#include <string.h>

//Comparecao de strings

int main(void) {

    char string1[10];
    char string2[10];

    printf("Digite a primeira string:\n");
    scanf("%s", string1);

    printf("Digite a segunda string:\n");
    scanf("%s", string2);

    if (strcmp(string1, string2)==0) {
        printf("As strings sao iguais!\n");
    }else printf("Ops!!");
return 0;
}
