#include <stdio.h>

int main(void) {
    int c1, c2, c3, voto;
    int t1=0, t2=0, t3=0;
    char nome1[50], nome2[50], nome3[50], ganhador[50];

    printf("Digite o nome do primeiro candidato:\n");
    scanf("%s", nome1);

    printf("Digite o numero do primeiro candidato:\n");
    scanf("%d", &c1);

    printf("Digite o nome do segundo candidato:\n");
    scanf("%s", nome2);

    printf("Digite o numero do segundo candidato:\n");
    scanf("%d", &c2);

    printf("Digite o nome do terceiro candidato:\n");
    scanf("%s", nome3);

    printf("Digite o numero do terceiro candidato:\n");
    scanf("%d", &c3);

    do {
        printf("Candidatos\n1-%s\n2-%s\n3-%s\n4-Branco\n5-Nulo\n", nome1, nome2, nome3);
        printf("111-Encerrar votacao\n");
        scanf("%d", &voto);

        if (voto==1) t1++;
        if (voto==2) t2++;
        if (voto==3) t3++;

    }while (voto!=111);

    printf("Total do candidato %s: %d\n", nome1, t1);
    printf("Total do candidato %s: %d\n", nome2, t2);
    printf("Total do candidato %s: %d\n", nome3, t3);

    ganhador=nome1;
    if (t2>t1) ganhador=nome2;
    if (t3>t1) ganhador=nome3;

    printf("O ganhador e: %s", ganhador);

    return 0;
}
