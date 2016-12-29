#include <stdio.h>
#include <stdlib.h>
void print(int perfect[], int count) {
    int i;
    for (i = 0; i < count; i++) {
        if (i == count - 1) {
            printf("%d\n", perfect[i]);
        } else {
            printf("%d + ", perfect[i]);
        }
    }
}
int isPerfect(int n) {
    int i, j, count = 0;
    int m = n;
    for (i = 2; i <= m; i++) {
        while (m % i == 0) {
            m = m / i;
            count = count + 1;
        }
    }
    count = 2 * count - 1;
    int sum = 0;
    int perfect[count];
    for (i = 1, j = 0; i < n && j < count; i++) {
        if (n % i == 0) {
            sum += i;
            perfect[j++] = i;
        }
    }


    if (sum == n) {
        printf("%d = ", n);
        print(perfect, count);
        return 1;
    } else
        printf("%d != ", n);
        print(perfect, count);
        return 0;
}
int main() {
    int n, i, count = 0;
    scanf("%d", &n);
    if (isPerfect(n))
        printf("%d is a perfect number\n", n);
    else
        printf("%d is not a perfect number\n", n);
}
