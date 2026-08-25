#include <stdio.h>
#include <string.h>

int main(void) {

    char nomes[10][51];
printf("Digite dez nomes\n");
    for (int i=0;i<10;i++) {
        fflush(stdin);
        gets(nomes[i]);
    }

    char aux[51];
    for (int i=0;i<10;i++) {
        for (int j=i+1;j<10;j++) {
            if (strcmp(nomes[i], nomes[j])==1) {
                strcpy(aux, nomes[j]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], aux);
            }
        }
    }

    printf("Nomes digitados:\n");
    for (int i=0;i<10;i++) {
        printf(" %s |", nomes[i]);
    }    return 0;
}
