#include <stdio.h>
#include <string.h>

int main() {
    int c1, c2, c3, voto;
    int t1=0, t2=0, t3=0;
    char nome1[50], nome2[50], nome3[50], ganhador[50]="";

    printf("Digite o nome do primeiro candidato:\n");
    scanf("%s", nome1);
    printf("Digite o numero do candidato:\n");
    scanf("%d", &c1);

    printf("Digite o nome do segundo candidato:\n");
    scanf("%s", nome2);
    printf("Digite o numero do candidato:\n");
    scanf("%d", &c2);

    printf("Digite o nome do terceiro candidato:\n");
    scanf("%s", nome3);
    printf("Digite o numero do candidato:\n");
    scanf("%d", &c3);

    do {
        printf("Candidatos\n%d-%s\n%d-%s\n%d-%s\n000-Nulo\n111-Encerrar votacao\n", c1, nome1, c2, nome2, c3, nome3);
        scanf("%d", &voto);

        if (voto==c1) t1++;
        if (voto==c2) t2++;
        if (voto==c3) t3++;
    } while (voto!=111);
    
    printf("O total de votos de %s foi %d\n", nome1, t1);
    printf("O total de votos de %s foi %d\n", nome2, t2);
    printf("O total de votos de %s foi %d\n", nome3, t3);

    if (t1>t2 && t1>t3) strcpy(ganhador, nome1);
    if (t2>t1 && t2>t3) strcpy(ganhador, nome2);
    if (t3>t2 && t3>t1) strcpy(ganhador, nome3);

    if (strcmp(ganhador, nome1) == 0 || strcmp(ganhador, nome2) == 0 || strcmp(ganhador, nome3) == 0){
        printf("O ganhador foi %s", ganhador);
    }else printf("Empate!");
    
    
    return 0;
}