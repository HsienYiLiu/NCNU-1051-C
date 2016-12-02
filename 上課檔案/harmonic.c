/*
* File Name : harmonic.c
* ID : 105213077
* Author : 黃湞鈺
*/

#include <stdio.h>
int main (){
    int n, i; // n the number you want
    float sum = 0.0;
    scanf ("%d", &n); // input the number
    
    for(i = 1; i <= n; i = i + 1){
        sum = sum + 1 / (float) i; // the formula for it
    }
    printf("%f", sum); // print out the result
    return 0;
    }