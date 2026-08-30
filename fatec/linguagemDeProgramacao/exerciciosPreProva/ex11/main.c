#include <stdio.h>
#include <string.h>

int main(void) {

    char string1[10];
    char string2[10];
    char string3[10];

    printf("Qual a primeira string:\n");
    scanf("%s", string1);

    printf("Qual a segunda string:\n");
    scanf("%s", string2);

    strcat(string1, string2);

    printf("%s", string1);
    return 0;
}
