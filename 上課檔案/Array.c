/*
* File Name : Array.c
* ID : 105213078
* Author : 稼锭タ订
*/
#include <stdio.h>
int isPrime(int n) {  //int isPrime ㄧ计
    int i ;
    int a = 0 ; //int a ㄓ癘魁计计ヘ
    for( i = 1 ; i <= n ; i++ ) {
        if(n % i == 0) {
            a = a + 1 ; //狦琌计a獽
        }
        if ( a == 2 ) {
            return 1 ;
        }
    }
    return 0;
}
int main () {
    int n ;
    printf ("块碭计\n");
    scanf ( "%d" , &n );
    int data[n];
    int i ;
    int x=0 ;
    int y=data[0] ;
    printf ("叫块\n");
    for ( i = 0  ; i < n ; i++ ) {
        scanf ("%d" , &data[i]);
        if (isPrime(data[i]) == 1) {
            if (data[i]>x) {
                x = data[i];
            }
            if (data[i]<y) {
                y = data[i];
            }
        }//耞程借计程借计
    }
    printf( "程 : %d\n" , x );//printf程借计
    printf( "程 : %d\n" , y );//printf程借计
    return 0;
}
