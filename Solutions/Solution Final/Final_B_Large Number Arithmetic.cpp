#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int a[N],b[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d %d", &a[i], &b[i]);
    }
    for (int i = 0; i < N; ++i) {
        int sum = a[i] + b[i];
        int difference = a[i] - b[i];
        long long int product = (long long int)a[i] * b[i];
        int quotient = 0;
        int remainder = 0;
        if (b[i] != 0) {
            quotient = a[i] / b[i];
            remainder = a[i] % b[i];
        } else {
            quotient = 0;
            remainder = 0;
        }
        printf("%d %d %lld %d %d\n", sum, difference, product, quotient, remainder);
    }
    return 0;
}
