
#include <stdio.h>

int main() {
    long long i, n;

    printf("Enter a number: ");
    scanf("%lld", &n);

    printf("Prime factors: ");

    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%lld ", i);
            n = n / i;
        }
    }

    return 0;
}