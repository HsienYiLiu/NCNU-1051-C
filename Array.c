/*
* File Name : Array.c
* ID : 105213078
* Author : �ڶ�����
*/
#include <stdio.h>
int isPrime(int n) {  //int isPrime ���
    int i ;
    int a = 0 ; //int a �ӰO���]�Ƽƥ�
    for( i = 1 ; i <= n ; i++ ) {
        if(n % i == 0) {
            a = a + 1 ; //�p�G�O�]��a�K�[�@
        }
        if ( a == 2 ) {
            return 1 ;
        }
    }
    return 0;
}
int main () {
    int n ;
    printf ("��J�X�h�ơH\n");
    scanf ( "%d" , &n );
    int data[n];
    int i ;
    int x=0 ;
    int y=data[0] ;
    printf ("�п�J\n");
    for ( i = 0  ; i < n ; i++ ) {
        scanf ("%d" , &data[i]);
        if (isPrime(data[i]) == 1) {
            if (data[i]>x) {
                x = data[i];
            }
            if (data[i]<y) {
                y = data[i];
            }
        }//�P�_�̤j�Ȫ���ơA�̤p�Ȫ����
    }
    printf( "�̤j�� : %d\n" , x );//printf�̤j�Ȫ����
    printf( "�̤p�� : %d\n" , y );//printf�̤p�Ȫ����
    return 0;
}
