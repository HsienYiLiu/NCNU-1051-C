#include <stdio.h>
//判斷是否為閏年
int leap(int a){ 
    return a%400==0 || a%4==0 && a%100!=0 ;
}
/*
int main(){
    //定義兩個變數year,c
    int year ;
    //定義一個變數,存放字元a,c
    char calender ;
    //輸入整數year,變數calender
    scanf("%d",&year);
    scanf("%c",&calender);
    //判定是西元,還是民國(a是西元,c是民國)
    
    if(calender=='a'){
        //判定是否為閏年
        if( leap(year)== 1){
            //輸出yes或no
            printf("Yes\n");
        }else{
            printf("No\n");
        }   
    }
    //判定是否為民國    
    if(calender=='c'){
        //讓民國變西元
        year=year+1911;
        //輸出yes或no
        if( leap(year)==1){
            printf("Yes\n");
        }else{ 
            printf("No\n");
        }
            
    }       
    return 0; 
}
*/
int main(){
    int syear,eyear;
    int sum = 0;
    scanf("%d",&syear);
    scanf("%d",&eyear);
    for(int i = syear ; i <= eyear ; i++){
        if(leap(i)==1){
            sum++;
        }
    }
    printf("%d", sum);
}