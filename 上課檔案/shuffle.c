/*
* File Name : shuffle.c
* ID : 105213078
* Author : 歐陽正隆
*/
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
void swap ( int data[] , int x , int y ) {
    int tmp = data[x] ;
    data[x] = data[y] ;
    data[y] = tmp ;
}
void print ( int data[] , int from , int len ) {
    int i , x ;
    for ( i = from ; i < from + len ; i++ ) {
        printf( "%d " , data[i] ) ;
        
    }
    //int color[] = {'S' , 'H' , 'D' , 'C'} ;
    /*int num[] = {'A' , 'K' , 'Q' , 'J' , 'T' , '9' , '8' , '7' , '6' , '5' , '4' , '3' , '2'} ;
    for ( x = 0 ; x < 4 ; x++ ) {
        printf ( "\n" ) ;
        //印顏色
        printf ( "%c " , color[x] ) ;
        for ( i = from ; i < from + len ; i++ ) {
            if ( color[data[i]/len] == color[x] ) {
                //印數目
                printf( "%c " , num[data[i] % len] ) ;
            }
        }
        printf ( "\n" );
    }
    printf ( "\n" ) ;*/
}
void shuffle ( int data[] , int len ) {
    int i , x , y ;
    for ( i = 0 ; i < 10000 ; i++ ) {
        x = rand() % len ;
        y = rand() % len ;
        swap( data , x , y ) ;
    }
}
//將data[l] - data[r]的元素排序
void sort ( int data[] , int l , int r ) {
    //要插入元素的索引
    int todo ;
    //由第2個元素開始插入
    for ( todo = l + 1 ; todo <= r ; todo++ ) {
        //tmp 表示要插入的元素值
        int tmp = data[todo] ;
        //要比較的位置
        int pos ;
        //當尚未超過左邊界，且該位置的值>tmp
        for ( pos = todo - 1 ; pos >= l && data[pos] > tmp ; pos-- )
            //將pos上的值住右邊移動
            data[pos + 1] = data[pos] ;
        //要插入的值應該放到pos的右邊
        data[pos + 1] = tmp ;
    }
}
int main () {
    int n;
    scanf("%d",&n);
    int data[n] ;
    int i ;
    srand( time (NULL) ) ;
    for ( i = 0 ; i < n ; i++ )
        data[i] = i+1 ;
    shuffle( data , n );
    for ( i = 0 ; i < 2 ; i++ )
        sort ( data , i * n/2 , i * n/2 + n/2 ) ;
    for ( i = 0 ; i < 2 ; i++ ) {
        //玩家號碼
        printf ( "class %d \n" , i + 1 ) ;
        print ( data , i * n/2 , n/2 ) ;
        printf ( "\n") ;

    }
}
