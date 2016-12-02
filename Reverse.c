/*
* File Name : Reverse.c
* ID : 105213062
* Author : Eu Yan Jie
*/
#include<stdio.h>
    // int y to 0
    // while x is not 0
       //get last digit of x
       //append last digit of x to y
       //append last digit from y
    //after the while loop, y is the answer
int reverse(int x){
    int y = 0;
    while (x != 0){
        y = 10 * y + x % 10;
    x = x / 10;
    }
    return y;
}
int main(){
    int n,z;
    scanf("%d",&n);
    z = n; // let z and n with same number, z + reverse(n) number
    printf("%d", reverse(n) + z); // let z + reverse(n) number, then printf out 
    return 0;
}