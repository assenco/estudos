#include <stdio.h>

int main(void) {
    int lotes[30]={0};
    int defeito[30]={0};
    double indice[30]={0};
    int i=0;

    for (i=0; i<30; i++) {
        printf("Digite a quantidade total de pecas do %d lote:\n", i+1);
        scanf("%d", &lotes[i]);
        if (lotes[i]<=0) {
            lotes[i]=0;
            break;
        }
        printf("Qual a quantidade de pecas defeituosas?\n");
        scanf("%d", &defeito[i]);
        if (defeito[i]<0 || defeito[i]>lotes[i]) {
            printf("Erro: Quantidade de pecas defeituosas invalida!\n");
            i--;
            continue;
        }

        indice[i]=(double)defeito[i]/lotes[i];
    }

    for (int j=0; j<i; j++) {
        printf("Lote %d: Indice de defeitos = %1.lf%\n", j+1, indice[j]*100);
        if (indice[j]>0.05) printf(">>>ALERTA: LOTE COM INDICE DE DEFEITOS CRITICO!<<<");
        printf("\n");
    }
    return 0;
}
