#include <stdio.h>
void main() {
    long n, i, sum = 0, power = 0;
    scanf("%ld", &n);
    for (i = 1; i <= n; sum += i*i, i++);
    printf("%ld\n", sum);
    for (long i = 2; sum != 1; printf(power > 0 ? "(%ld^%ld) " : "", i, power), i++)
        for (power = 0; sum % i == 0; sum /= i, power++);
}
