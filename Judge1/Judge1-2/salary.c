#include <stdio.h>
int main() {
    int month, i, j, n;
    double number;
    double * bonus;
    double bonus_normal[] = {50, 55.5, 66.78, 88.87, 135.7, 179.8};
    double bonus_special[] = {88.2, 111.1, 141.4, 173.2, 200, 288.2};
    double sale[] = {500, 100, 100, 100, 100};
    while (1) {
        int worst_salesman = 0, worst = 1000000;
        printf("This month is ");
        scanf("%d", &month);
        if (month > 1 && month < 9) {
            bonus = bonus_normal;
        } else {
            bonus = bonus_special;
        }
        printf("How many salesman in this month: ");
        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            double salary = 10000;
            scanf("%lf", &number);
            for (j = 0; j < 6; j++){
                if (j != 5) {
                    if (number <= sale[j]) {
                        salary = salary + (number * bonus[j]);
                        break;
                    } else {
                        salary = salary + (sale[j] * bonus[j]);
                        number = number - sale[j];
                    }
                } else {
                    salary = salary + number * bonus[j];
                }
            }
            printf("No.%d Salesman's Salary : %lf\n", i + 1, salary);
            if(salary < worst) {
                worst = salary;
                worst_salesman = i + 1;
            }
        }
        printf("\nNo.%d Salesman is the worst in this month\n\n", worst_salesman);
    }
}
