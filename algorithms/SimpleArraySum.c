#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, x;
    int sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        sum += x;
    }

    printf("%d", sum);

    return 0;
}
