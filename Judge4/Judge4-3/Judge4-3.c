#include <stdio.h>
void sort(int data1[], int data2[], int len) {
    int i;
    int tmp1, tmp2;
    int j;
    for (i = 1;i < len;i++) {
        tmp1 = data1[i];
        tmp2 = data2[i];
        j = i - 1;
        while (j >= 0 && data1[j] > tmp1) {
            data1[j+1] = data1[j];
            data2[j+1] = data2[j];
            j = j - 1;
        }
        data1[j+1] = tmp1;
        data2[j+1] = tmp2;
    }
}
int main() {
    int n;//多少種火鍋料
    int i, j;
    printf("要買多少種火鍋料?");
    scanf("%d", &n);
    int price[n];//單價
    int amount[n];//數量
    int total = 0;//總價
    int len = 0;//總共買多少
    int discount;//送多少
    for(i = 0;i < n;i++) {
        scanf("%d", &price[i]);
        scanf("%d", &amount[i]);
        total = total + price[i] * amount[i];
        len = len + amount[i];
    }
    discount = len / 6;
    sort(price, amount, n);
    int count = 0;//這個商品的價錢扣到第幾個
    int sum = 0;//目前扣到第幾個商品
    if(discount > 0) {
        for(i = 0;i < discount;i++) {
            while(count < amount[i] && sum < discount) {//扣好扣滿才跳出
                total = total - price[i];
                count++;
                sum++;
            }
            count = 0;
       }
       printf("total: %d", total);
    } else{
        printf("total: %d", total);
    }


}

