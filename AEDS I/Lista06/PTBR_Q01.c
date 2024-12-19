#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Este programa simula um sistema de votacao com tres candidatos e calcula a porcentagem de votos para cada um deles.

int main() {
    int voto, chapa1 = 0, chapa2 = 0, nulo = 0, total = 0;
    float pchapa1, pchapa2, pnulo;
    bool erro;

    do {
        printf("\nELEICAO PARA A CARGO DE REPRESENTANTE\n");
        printf("\n0 - SAIR DO PROGRAMA");
        printf("\n1 - CHAPA 1");
        printf("\n2 - CHAPA 2");
        printf("\n3 - nulo");
        printf("\nDIGITE SUA OPCAO: ");
        scanf("%d", &voto);

        erro = voto < 0 || voto > 3;
        if (erro) {
            printf("Valor invalido!");
        } else {
            switch (voto) {
                case 1: chapa1++;
                        total++;
                        break;
                case 2: chapa2++;
                        total++;
                        break;
                case 3: nulo++;
                        total++;
                        break;
            }
        }
    } while (voto != 0);

    printf("\nRESULTADO DA VOTACAO\n");
    printf("\nTOTAL DE VOTOS: %d\n", total);

    if (chapa1 > chapa2 && chapa1 > nulo) {
        pchapa1 = (float)chapa1 / total * 100;
        printf("O VENCEDOR E O CHAPA 1 COM %.2f PORCENTO DOS VOTOS\n", pchapa1);
    } else if (chapa2 > chapa1 && chapa2 > nulo) {
        pchapa2 = (float)chapa2 / total * 100;
        printf("O VENCEDOR E O CHAPA 2 COM %.2f PORCENTO DOS VOTOS\n", pchapa2);
    } else if (nulo > chapa1 && nulo > chapa2) {
        pnulo = (float)nulo / total * 100;
        printf("O VENCEDOR E O nulo COM %.2f PORCENTO DOS VOTOS\n", pnulo);
    }

    return 0;
}
