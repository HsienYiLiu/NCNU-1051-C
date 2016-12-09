#include<stdio.h>
int main(){
    while(1){
        int i,x,n;
        int identify = 0;
        scanf("%d",&n);
        int num[n];
        for(i = 0;i < n ;i++){
            scanf("%d",&x);
            num[i] = x;
        }
    //    for(i = 0;i < n ;i++){
    //        printf("%d ",num[i]);
    //  }
        for(i = n-1 ; i > 0;i--){
            identify = identify + num[i] * i;
        }
        printf("%\n");
        printf("%d ",identify);
        if(identify%10 == num[0]){
            printf("\n");
            printf("real");
        }else{
            printf("\n");
            printf("false");
        }
        printf("\n");
    }
}
