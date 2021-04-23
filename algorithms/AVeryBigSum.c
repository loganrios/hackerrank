#include <stdio.h>
#include <stdint.h>

// "But it works for me!"
// Fails on website for some godforsaken compiler-specific reason
int main() {
    int n, i;
    long long x;
    long long sum;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%lld", &x);
        sum += x;
    }

    printf("%lld\n", sum);
    return 0;
}
