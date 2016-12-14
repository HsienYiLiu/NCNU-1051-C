#include <stdio.h>
int isHappy(int x) {
    int i, j = 0;
    int check[10000];
    while (x > 1) {
        for (i = 0; i < j; i++) {
            if (x == check[i]) 
                return 0;
        }
        check[j++] = x;
        int sum = 0;
        while (x > 0) {
            sum += (x % 10) * (x % 10);
            x /= 10;
        }
        x = sum;
    }
    return 1;
}
int main() {
    int n, i;
    scanf("%d", &n);
    int data[n];
    for (i = 0; i < n; i++)
        scanf("%d", &data[i]);
    for (i = 0; i < n; i++) {
        if (isHappy(data[i]) == 1)
            printf("Case #%d: %d is a Happy number.\n", i+1, data[i]);
        else
            printf("Case #%d: %d is an Unhappy number.\n", i+1, data[i]);
    }
}
