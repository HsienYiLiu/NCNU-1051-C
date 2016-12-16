#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//升冪排序
void sort(int data[],int n){
    int j, i, tmp;
    for(i = 1;i < n;i++){
        tmp = data[i];
        j = i - 1;
        while(j >= 0 && tmp < data[j]){
            data[j + 1] = data[j];
            j = j - 1;
        }
        data[j + 1] = tmp;
    }
}
//判斷是否為質數
int isprime(int n){
    int i = n - 1;
    while(i > 1) {
        if(n % i == 0) {
            return 0;
        }
        i--;
    }
    if(n == 1) {
        return 0;
    }
    return 1;
}
// 樂透號碼
void getNumber(int lotto[]) {
    srand(time(NULL));
    int i, j;

    // 特別碼需為質數
    int special = rand() % 49 + 1;
    while(isprime(special) != 1){
        special = rand() % 49 + 1;
    }
    lotto[6] = special;

    // 產出其他的號碼且不與特別碼重複
    for(i = 0; i < 6; i++){
        lotto[i] = rand() % 49 + 1;
        // 過濾與特別碼相同的號碼
        while(lotto[i] == special) {
            lotto[i] = rand() % 49 + 1;
        }
        for(j = i - 1; j >= 0; j--) {
            if(lotto[i] == lotto[j]){
                i--;
                break;
            }
        }
    }
    // 排序
    sort(lotto, 6);
}
void bingo(int n[], int l[], int b[]) {
    int i, j;
    for (i = 0; i < 6; i++) {
        b[i] = 0;
    }
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 7; j++) {
            if(n[i] == l[j]) {
                b[i] = n[i];
            }
        }
    }
}
int main() {
    int i, j, count = 0;

    //買了哪些號碼
    int number[6];
    for (i = 0; i < 6; i++) {
        scanf("%d", &number[i]);
    }

    //開獎號碼
    int lotto[7];
    getNumber(lotto);

    //印出開獎號碼
    printf("\n本期號碼: ");
    for (i = 0; i < 6; i++) {
        printf("%2d ", lotto[i]);
    }
    printf("\n特別號: %2d\n", lotto[6]);
    printf("\n");

    //對獎
    int bingoNumber[6];
    bingo(number, lotto, bingoNumber);

    //印出中獎號碼
    printf("中獎號碼: ");
    for (i = 0; i < 6; i++){
        if(bingoNumber[i] > 0) {
            printf("%2d ", bingoNumber[i]);
        } else {
            count++;
        }
        if (count == 6) {
            printf("很遺憾，你還是別買特透吧");
        }
    }
    printf("\n");
}
