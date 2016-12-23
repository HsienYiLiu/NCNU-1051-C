#include <math.h>
#include <stdio.h>
    #include <stdlib.h>
//轉換為座標
int judgeXY(int board[],int n,int from){
    //x,y代表作標，judge找尋每層中位數
    int x,y,judge;
    int tmp = sqrt(n);
    if(tmp*tmp != n){
        tmp = tmp + 1;
    }
    x = tmp;
    y = tmp;
    judge = x*y - (tmp-1);
    //偶數區域
    if(x % 2 == 0){
        while(n > judge){
            y--;
            n--;
        }
        while(n < judge){
            x--;
            n++;
        }
    //奇數區域
    }else{
        while(n > judge){
            x--;
            n--;
        }
        while(n < judge){
            y--;
            n++;
        }
    }
    board[from] = x;
    board[from+1] = y;
}
int main(){
    int i = 0,n,w,board[4];
    printf("Input for their position\n");
    while(i < 2){
        scanf("%d", &n);
        judgeXY(board,n,i*2);
        i++;
    }
    for(i = 0 ; i < 2 ; i++)
        printf("(%d,%d) \n", board[i*2],board[i*2+1]);
    printf("Their distance is : ");
    float distance;
    i = 0;
    distance = sqrt(pow(abs(board[i+2] - board[i]),2)+pow(abs(board[i+1] - board[i+3]),2));
    printf("%f\n", distance);
}
