#include <stdio.h>
void main() {
    int month, n, i, worst, min = 99999999, s = 0;
    printf("This month is: \n");
    scanf("%d", &month);
    printf("How many salesman in this month: \n");
    scanf("%d", &n);
    float level[] = {0, 500, 600, 700, 800, 900};
    float bonus[] = {50, 55.5, 66.78, 88.87, 135.7, 179.8, 88.2, 111.1, 141.4, 173.2, 200, 288.2};
    if (month < 2 || month > 8)
        s = 1;
    for (i = 0; i < n; i++) {
        float salary = 10000.0;
        int volume, j;
        scanf("%d", &volume);
        for (j = 5; j >= 0; j--) {
            int dis = volume - level[j];
            if (dis > 0) {
                salary += ((float)dis) * bonus[s*5+j];
                volume -= dis;
            }
        }
        printf("No.%d salesman's salary : %f\n", i+1, salary);
        if (min > salary) {
            min = salary;
            worst = i+1;
        }
    }
    printf("No.%d is the worst salesman in this month\n", worst);
}
