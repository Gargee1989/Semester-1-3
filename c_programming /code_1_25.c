#include <stdio.h>
int main() {
    int n, is_prime;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Prime numbers up to %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        is_prime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
