#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Este programa calcula a media das notas de uma turma, identifica a maior e a menor nota e determina se os alunos foram aprovados ou reprovados.

int main() {
    int alunos;
    float nota, soma = 0, maior = 0, menor = 100;
    bool erro;

    printf("Digite a quantidade de alunos na sala: ");
    scanf("%d", &alunos);

    do {
        do {
            printf("Digite a nota do aluno: ");
            scanf("%f", &nota);
            erro = nota < 0 || nota > 100;
            if (erro) printf("Nota invalida! Insira uma nota entre 0 e 100.\n");
        } while (erro);

        soma += nota;
        if (nota > maior) maior = nota;
        if (nota < menor) menor = nota;
        alunos--;

        if (nota >= 60)
            printf("\nAPROVADO\n");
        else
            printf("\nREPROVADO\n");

    } while (alunos > 0);

    float media = soma / (alunos + 1); 
    printf("\nA nota media da turma e: %.2f\n", media);
    printf("A maior nota da turma e: %.2f\n", maior);
    printf("A menor nota da turma e: %.2f\n", menor);

    return 0;
}
