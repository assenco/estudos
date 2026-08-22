#include <stdio.h>

int main(void) {
    int mat [3][4];
    int somaL [3]={0};
    int somaC [4]={0};
    int k=0;
    int melhor=0;
    int dia=0;

    //Leitura de dados
    for (int j=0; j<4; j++) {
        printf("Dia %d\n", j+1);
        for (int i=0; i<3; i++) {
            printf("Digite a producao da maquina %d:\n", i+1);
            scanf("%d", &mat[i][j]);
        }
    }

    //Calculo total por maquina
    for (int j=0; j<3; j++) {
        for (int i=0; i<4; i++) {
            somaL[k]+=mat[j][i];
        }
        k++;
    }
    k=0;

    //Calculo total por dia
    for (int j=0; j<4; j++) {
        for (int i=0; i<3; i++) {
            somaC[k]+=mat[i][j];
        }
        k++;
    }
    k=0;

    //Comparação melhor dia
    for (int j=0; j<4; j++) {
        if (somaC[j]>melhor) {
            melhor=somaC[j];
            dia=j+1;
        }
    }

    //Exibição dos valores
    for (int j=0; j<3; j++) {
        for (int i=0; i<4; i++) {
            printf("[%d]", mat[j][i]);
        }
        printf("=%d", somaL[k]);
        k++;
        printf("\n");
    }
    k=0;
    /*for (int j=0; j<4; j++) {
        printf(" %d ", somaC[k]);
        k++;
    }*/
    k=0;
    printf("\n");
    printf("Melhor dia foi o %d com %d pecas", dia, melhor);

    return 0;
}

/*
 Contexto: Uma fábrica têxtil monitora a produção diária de 3 de suas máquinas ao longo de 4 dias
da semana (de segunda a quinta-feira).

Enunciado: Escreva um programa em C que utilize uma matriz de inteiros de tamanho 3 X 4 para
armazenar a quantidade de peças produzidas. As linhas representam as máquinas (0 a 2) e as
colunas representam os dias (0 a 3).
Divida sua solução atendendo aos seguintes critérios de avaliação:

• Item A (1,0 ponto) - Leitura Dinâmica: Implemente estruturas de repetição aninhadas (for)
para ler do teclado a quantidade de peças produzidas por cada máquina em cada dia,
preenchendo completamente a matriz 3 X 4.

• Item B (1,5 pontos) - Análise por Linha (Máquina): Calcule e exiba na tela o total de peças
produzidas por cada uma das 3 máquinas individualmente ao longo dos 4 dias.

• Item C (1,5 pontos) - Análise por Coluna (Dia): Identifique e exiba qual dos 4 dias (índice
da coluna) obteve a maior produção somada de todas as máquinas combinadas.

• Item D (1,0 ponto) - Exibição Formatada: Imprima a matriz completa na tela em formato
de tabela (linhas e colunas alinhadas), utilizando sequências de escape como \n (ao final
de cada linha) para garantir a organização visual.*/