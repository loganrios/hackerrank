#include <stdio.h>
#include <stdlib.h>

#define LEN 3

void slurp3(int* a) {
    for (int i = 0; i < LEN; i++) {
        scanf("%d", &(a[i]));
    }
    return;
}

int main() {
    int i;
    int alice[LEN];
    int bob[LEN];
    int ascore = 0;
    int bscore = 0;

    slurp3(alice);
    slurp3(bob);

    for (i = 0; i < LEN; i++) {
        if (alice[i] == bob[i])
            continue;
        
        if (alice[i] > bob[i]) {
            ascore++;
            continue;
        }

        bscore++;
    }

    printf("%d %d", ascore, bscore);
    return 0;
}