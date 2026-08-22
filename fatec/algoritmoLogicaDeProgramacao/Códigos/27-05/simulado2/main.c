#include <stdio.h>

int main(void) {
    double dist=0, comb=0, frot=0;
    double med[50]={0};
    int cont=0;

    do {
        printf("Distancia do %d caminhao:\n", cont+1);
        scanf("%lf", &dist);
        if (dist<=0) break;

        printf("Gasto de combustivel:\n");
        scanf("%lf", &comb);
        if (comb<=0) {
            printf("Valor Invalido!");
            continue;
        }

        med[cont]=dist/comb;

        printf("[%.2lf]", med[cont]);
        if (med[cont]<3.5) printf("Alerta! Alto consumo");
        printf("\n");

        cont++;
    }while (dist>0);

    printf("A frota possui %d caminhoes\n", cont);

    for (int i=0; i<cont; i++) {
        frot=frot+med[i];
    }
    frot/=cont;

    printf("Gasto medio da frota: %.2lf", frot);

    return 0;
}

/* Escreva um programa completo em C que leia a distância percorrida (em km) e o
combustível consumido (em litros) de uma quantidade indeterminada de caminhões, até que um
valor negativo ou zero seja digitado para a distância. O programa deve armazenar o consumo médio
de até 50 caminhões válidos em um vetor e, ao final, exibir estatísticas.
Divida sua solução atendendo aos seguintes critérios de avaliação:

• Item A (1,0 ponto) - Entrada e Condição de Parada: Implemente a leitura inicial dos dados
usando scanf e uma estrutura de repetição (while ou do-while). O programa deve
interromper a leitura imediatamente se a distância digitada for menor ou igual a zero (utilize
o comando break).

• Item B (1,0 ponto) - Validação e Controle de Fluxo: Dentro do laço, garanta que a
quantidade de combustível seja estritamente maior que zero. Se o usuário digitar um valor
inválido para o combustível, exiba uma mensagem de erro e utilize o comando continue
para saltar para a próxima repetição sem processar o caminhão atual.

• Item C (1,5 pontos) - Processamento e Vetor: Calcule o consumo médio (km/l) de cada
caminhão válido e armazene esse valor em um vetor unidimensional. Utilizando o operador
ternário ou uma estrutura if/else, verifique se o consumo do caminhão atual está abaixo de
3.5 km/l. Se estiver, exiba o aviso: "Alerta: Alto Consumo".

• Item D (1,5 pontos) - Saída de Dados: Após o encerramento da coleta de dados, utilize um
laço for para percorrer o vetor preenchido. Calcule e exiba a média geral de consumo da
frota e a quantidade total de caminhões que foram armazenados com sucesso.*/