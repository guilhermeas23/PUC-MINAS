#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// AUTHOR: GUILHERME DE ALMEIDA SANTOS
// STATEMENT:
// This program simulates a voting system with three candidates and calculates the percentage of votes for each.

int main() {
    int vote, candidate1 = 0, candidate2 = 0, nullVotes = 0, totalVotes = 0;
    float percentCandidate1, percentCandidate2, percentNullVotes;
    bool error;

    do {
        printf("\nELECTION FOR REPRESENTATIVE\n");
        printf("\n0 - EXIT PROGRAM");
        printf("\n1 - CANDIDATE 1");
        printf("\n2 - CANDIDATE 2");
        printf("\n3 - NULL VOTE");
        printf("\nENTER YOUR OPTION: ");
        scanf("%d", &vote);

        error = vote < 0 || vote > 3;
        if (error) {
            printf("Invalid value!");
        } else {
            switch (vote) {
                case 1: candidate1++;
                        totalVotes++;
                        break;
                case 2: candidate2++;
                        totalVotes++;
                        break;
                case 3: nullVotes++;
                        totalVotes++;
                        break;
            }
        }
    } while (vote != 0);

    printf("\nVOTING RESULTS\n");
    printf("\nTOTAL VOTES: %d\n", totalVotes);

    if (candidate1 > candidate2 && candidate1 > nullVotes) {
        percentCandidate1 = (float)candidate1 / totalVotes * 100;
        printf("THE WINNER IS CANDIDATE 1 WITH %.2f PERCENT OF THE VOTES\n", percentCandidate1);
    } else if (candidate2 > candidate1 && candidate2 > nullVotes) {
        percentCandidate2 = (float)candidate2 / totalVotes * 100;
        printf("THE WINNER IS CANDIDATE 2 WITH %.2f PERCENT OF THE VOTES\n", percentCandidate2);
    } else if (nullVotes > candidate1 && nullVotes > candidate2) {
        percentNullVotes = (float)nullVotes / totalVotes * 100;
        printf("THE WINNER IS NULL VOTES WITH %.2f PERCENT OF THE VOTES\n", percentNullVotes);
    }

    return 0;
}
