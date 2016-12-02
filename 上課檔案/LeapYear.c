/*
* File Name : Leap.c
* ID        : 105213079
* Author    : 黃詩慧
*/

/*
輸入兩個年份 y1 y2
印出 y1 <= ~ <= y2 的閏年數
*/

#include <stdio.h>
int main(){
    int r;//set as memory
    int y1,y2;//set as subject
    int leap = 0;//set as answer
    scanf ("%d%d", &y1,&y2);
    
    for (r = y1; r<= y2 ;  r = r + 1){//set repeat
        if (r%400 == 0 || (r%4 == 0 && r%100 != 0)){// check if is leap year
            leap = leap + 1;// if true leap + 1
            }       
    }                   
    printf ("The amount of leap year between y1&y2 are %d", leap);//print the answer
    return 0;
}