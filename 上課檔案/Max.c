/*
* File Name : Max.c
* ID : 105213062
* Author : Eu Yan Jie
*/
#include <stdio.h>
int main(){
    int x, data; //declare varriable x and data 
    int n = 0; // int n to 0 
    scanf("%d", &x); // read in x
    //read in data x time 
    for (int i = 1; i <= x; i = i +1){
        scanf("%d", &data);
        //for each data, check if 
        if (data > n){
            n = data;
        }
    }
    printf("%d", n); // print out n 
    return 0;
}