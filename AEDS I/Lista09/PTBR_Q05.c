#include <stdio.h>
#include <stdlib.h>

// AUTOR: GUILHERME DE ALMEIDA SANTOS
// ENUNCIADO:
// Calcule e escreva os n primeiros termos Fibonacci, sendo n um valor lido.

int main() {
    int n, i;
    unsigned long long termo1 = 0, termo2 = 1, proximo;

    printf("Digite a quantidade de termos da sequencia Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Valor invalido! Insira um numero positivo.\n");
        return 1;
    }

    printf("Sequencia Fibonacci com %d termos:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%llu ", termo1);
        proximo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximo;
    }

    printf("\n");

    return 0;
}
