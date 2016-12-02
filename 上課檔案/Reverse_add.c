/*
* File Name : Reverse_add.c
* ID : 105213065
* Author :林則勇
*/
#include<stdio.h>
int reverse(int x) {
    //reverse format
    int y = 0;
    while(x != 0){
        y = 10 * y + x % 10;
        x = x / 10;
    }
    return y;
}
int main() {
    int n, sum = 0;//declare n,sum
    scanf("%d",&n);//read n
    sum = n + reverse(n);//i want n + n's reverse
    printf("%d",sum);//answer
    return 0; 
}