#include <stdio.h>

int main() {
    int n, is_prime, sum = 0;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        is_prime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            sum += i;
        }
    }
    printf("Sum of prime numbers between 1 and %d is %d\n", n, sum);
    return 0;
}
