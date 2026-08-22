#include <stdio.h>

int main(void) {

    char nome [5][21];
    double nota[5][3];

    //Registar nome dos alunos

    for (int i=0;i<2;i++) {
        printf("Qual o nome do %d aluno:\n", i+1);
        gets(nome[i]);
        fflush(stdin);

        //Registrar notas dos alunos

        for (int j=0;j<2;j++) {
            printf("Qual a %d nota de %s:\n", j+1, nome[i]);
            scanf("%lf", &nota[i][j]);
            fflush(stdin);
        }
    }

    //Calcular media dos alunos

    for (int i=0;i<2;i++) {
        nota[i][2]=(nota[i][0]+nota[i][1])/2;
    }

    //Exibe nota e media final de cada aluno em forma de lista

    for (int i=0;i<2;i++) {
        printf("%s", nome[i]);
        for (int j=0;j<3;j++) {
            printf(" | %.1lf", nota[i][j]);
        }
        printf("\n");
    }

return 0;
}