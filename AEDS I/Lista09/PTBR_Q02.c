#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Este programa identifica o perfil de uma turma com base em genero e idade. A leitura dos dados e interrompida com a idade igual a -1.
// Calcula:
// - Percentual de homens e mulheres
// - Percentual de alunos maiores de idade
// - Idade da pessoa mais velha e mais nova

int main() {
    int idade, totalAlunos = 0, totalHomens = 0, totalMulheres = 0, maioresIdade = 0;
    int idadeMaisVelha = 0, idadeMaisNova = 100;
    char genero;

    do {
        // Leitura da idade
        printf("\nDigite a idade do aluno (-1 para encerrar): ");
        scanf("%d", &idade);

        if (idade == -1) break;

        if (idade < 0 || idade > 100) {
            printf("Idade invalida! Insira uma idade entre 0 e 100.\n");
            continue;
        }

        // Leitura do genero
        do {
            printf("Digite o genero do aluno (m/f): ");
            scanf(" %c", &genero);
            genero = tolower(genero);
            if (genero != 'm' && genero != 'f') {
                printf("Genero invalido! Digite 'm' para masculino ou 'f' para feminino.\n");
            }
        } while (genero != 'm' && genero != 'f');

        // Contabiliza os dados
        totalAlunos++;
        if (genero == 'm') {
            totalHomens++;
        } else if (genero == 'f') {
            totalMulheres++;
        }

        if (idade >= 18) {
            maioresIdade++;
        }

        if (idade > idadeMaisVelha) {
            idadeMaisVelha = idade;
        }

        if (idade < idadeMaisNova) {
            idadeMaisNova = idade;
        }

    } while (1);

    // Calculo dos percentuais
    float percentualHomens = (totalHomens / (float)totalAlunos) * 100;
    float percentualMulheres = (totalMulheres / (float)totalAlunos) * 100;
    float percentualMaiores = (maioresIdade / (float)totalAlunos) * 100;

    // Exibe os resultados
    printf("\nRESULTADO DA TURMA\n");
    printf("Total de alunos: %d\n", totalAlunos);
    printf("Percentual de homens: %.2f%%\n", percentualHomens);
    printf("Percentual de mulheres: %.2f%%\n", percentualMulheres);
    printf("Percentual de maiores de idade: %.2f%%\n", percentualMaiores);
    printf("Idade da pessoa mais velha: %d\n", idadeMaisVelha);
    printf("Idade da pessoa mais nova: %d\n", idadeMaisNova);

    return 0;
}
