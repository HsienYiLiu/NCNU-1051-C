#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void print(char c,int n){
    int i;
    for(i = 0 ; i < n ;i++){
        printf("%c",c);
    }
}
int main(){
    srand(time(NULL));
    int i,n;
    int nlen;
    int chance;
    int slen = 0;
    int alen = 0;
    int blen = 0;
    int clen = 0;
    int dlen = 0;
    printf("請輸入要幾連抽：");
    while( slen < 1){
        scanf("%d",&n);
        nlen = nlen + n;
        for (i = 0; i < n; i++){
            chance = rand()%100+1;
            if ( chance <= 1 ){
                slen = slen + 1;
            }else if( 1 < chance && chance <= 10 ){
                alen = alen + 1;
            }else if( 10 < chance && chance <= 30 ){
                blen = blen + 1;
            }else if( 30 < chance && chance <= 60 ){
                clen = clen + 1;
            }else if( 60 < chance && chance <= 100 ){
                dlen = dlen + 1;
            }
        }
            printf("S:");
            print('*',slen);
            printf("\n");
            printf("A:");
            print('*',alen);
            printf("\n");
            printf("B:");
            print('*',blen);
            printf("\n");
            printf("C:");
            print('*',clen);
            printf("\n");
            printf("D:");
            print('*',dlen);
            printf("\n");
    }
    printf("\n");
    printf("S級卡 GET!!!");
    printf("\n");
    printf("共抽%d次",nlen);
    printf("\n");
}