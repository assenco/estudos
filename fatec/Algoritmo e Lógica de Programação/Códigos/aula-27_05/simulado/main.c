#include <stdio.h>

int main(void) {
    float dist[50]={0}, comb[50]={0}, med[50]={0}, frot=0;
    int cont=0;
    int s;
    do {
        printf("Distancia percorrida pelo %d caminhao:\n", cont+1);
        scanf("%f", &dist[cont]);
        if (dist[cont]<=0) break;

        printf("Combustivel gasto na viagem:\n");
        scanf("%f", &comb[cont]);
        if (comb[cont]<=0) {
            printf("ERRO!");
            continue;
        }
        cont++;

        scanf("%d", &s);
    }while (s==1);

    for (int i=0; i<cont; i++) {
        med[i]=dist[i]/comb[i];
    }

    for (int i=0; i< cont; i++) {
        frot+= med[i];
    }
    frot=frot/cont;

    for (int i=0; i<cont; i++) {
        printf("[%.2f]",dist[i]);
    }
    printf("\n");

    for (int i=0; i<cont; i++) {
        printf("[%.2f]",comb[i]);
    }
    printf("\n");

    for (int i=0; i<cont; i++) {
        printf("[%.2f]",med[i]);
        if (med[i]<3.5) printf("Alerta: Alto consumo!");
        printf("\n");
    }
    printf("[%.2f]", frot);

    return 0;
}