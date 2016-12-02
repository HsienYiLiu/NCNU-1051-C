#include <stdio.h>
double pay(int m, int n) {
    double bonus = 0;
    if (n == 0)
        return 0;
    else if (m > 1 && m < 9) {
        if (n <= 500)
            bonus = n * 50;
        else if (n > 500 && n < 601)
            bonus = pay(m, 500) + (n - 500) * 55.5;
        else if (600 < n && n < 701 )
            bonus = pay(m, 600) + (n - 600) * 66.78;
        else if (700 < n && n < 801 )
            bonus = pay(m, 700) + (n - 700) * 88.87;
        else if (800 < n && n < 901)
            bonus = pay(m, 800) + (n - 800) * 135.7;
        else
            bonus = pay(m, 900) + (n - 900) * 179.8;
    }
    else {
        if (n <= 500)
            bonus = n * 88.2;
        else if (n > 500 && n < 601)
            bonus = pay(m, 500) + (n - 500) * 111.1;
        else if (600 < n && n < 701 )
            bonus = pay(m, 600) + (n - 600) * 141.4;
        else if (700 < n && n < 801 )
            bonus = pay(m, 700) + (n - 700) * 173.2;
        else if (800 < n && n < 901)
            bonus = pay(m, 800) + (n - 800) * 200;
        else
            bonus = pay(m, 900) + (n - 900) * 288.2;
    }
    return bonus;
}
int main() {
    int month, n, i, number;
    //連續輸入
    while(1) {
        int worst_salesman, worst = 1000000;
        printf("This month is ");
        scanf("%d", &month);
        printf("How many salesman in this month: ");
        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            scanf("%d", &number);
            printf("No.%d Salesman's Salary : %lf\n", i + 1, 10000 + pay(month, number));
            if(number < worst) {
                worst = number;
                worst_salesman = i + 1;
            }
        }
        printf("\nNo.%d Salesman is the worst in this month\n\n", worst_salesman);
    }
}