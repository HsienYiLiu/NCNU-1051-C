#include <stdio.h>
int check(int a, int b, int c) {
    int data[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while (a > 0) {
        if (data[a % 10] == 1)
            return 0;
        data[a % 10] = 1;
        a = a / 10;
    }
    while (b > 0) {
        if (data[b % 10] == 1)
            return 0;
        data[b % 10] = 1;
        b = b / 10;
    }
    while (c > 0) {
        if (data[c % 10] == 1)
            return 0;
        data[c % 10] = 1;
        c = c / 10;
    }
    return 1;
}
int main() {
    for (int i = 10; i < 100; i++) {
        for (int j = 100; j < 1000 && i*j < 100000 ; j++) {
            if (i*j > 9999 && check(i, j, i*j) == 1) 
                printf("%d * %d = %d\n", i, j, i*j);
        }
    }
    return 0;
}