#include <stdio.h>
// list all permulations of an array
// @data array of chars to permulate
// @n length of array
void print(int data[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d", data[i]);
    printf("\n");
}
void swap(int data[], int x, int y) {
    int tmp = data[x];
    data[x] = data[y];
    data[y] = tmp;
}
void insert(int data[], int from, int to) {
    int i;
    // dir指的是from 到 to 的方向
    int dir = 1;
    if (from > to)
        dir = -1;
    // 空出from位置
    char tmp = data[from];
    // i表空格位置,i由from開始
    // 一直到to為止
    // 將同方向的元素複製到i
    for (i = from; i != to; i += dir) {
        data[i] = data[i + dir];
    }
    data[to] = tmp;
}
void perm2(int data[], int n, int from) {
    if (n == from) {
        print(data, n);
        return;
    }
    int i;
    for (i = from; i < n; i++) {
        insert(data, i, from);
        perm2(data, n, from + 1);
        insert(data, from, i);
    }
}
void perm(int data[], int n) {
    perm2(data, n, 0);
}
// n 是陣列的長度
// m 是想要取的組合個數
// from 是目前處理到哪個位置
// got 是已經取到了幾個
void comb2(int data[], int n, int m,
           int from, int got) {
    if (m == got) {
        int i;
        for (i = 0; i < m; i++)
            printf("%d", data[i]);
        printf("\n");
        return;
    }
    int i;
    // 試圖選擇第i的元素
    for (i = from; i < n; i++) {
        // 選i,並把此值存到前面去
        swap(data, i, got);
        // 遞迴處理剩下的資料
        comb2(data, n, m, i + 1, got + 1);
        // 回復原值
        swap(data, i, got);
    }
}
void comb(int data[], int n, int m) {
    comb2(data, n, m, 0, 0);
}
// d是每位學生可以跑的距離
// n是學生數
// target是老俞想跑的距離
// from 由哪個學生之後挑人
// got 已經找到幾個學生
// killo 已經找到的學生一共可以跑多遠
void run2(int d[], int n, int target,
          int from, int got, int killo) {
    
    // 終止條件?
    int i;
    if( killo >= target ){
        if(killo == target){
            for (i = 0; i < got; i++)
                printf("%d ", d[i]);
            printf("\n");
        }
        return;
    } 
    for(i = from ; i < n ;i++){
        swap(d, i, got);
        run2(d, n, target, i + 1, got + 1, killo + d[got]);
        swap(d, i, got);
    }
}
// d是每位學生可以跑的距離
// n是學生數
// target是老俞想跑的距離
void run(int d[], int n, int target) {
    run2(d, n, target, 0, 0, 0);
} 
void main() {
    char s[] ={'a','b','c','d'};
    int d[] = {4, 5, 7, 8, 10, 11, 3, 6};
    // 最多8人接力跑42K
    run(d, 8, 42);
    //perm(s,4);
}