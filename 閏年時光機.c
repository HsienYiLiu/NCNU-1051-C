#include <stdio.h>
int judge(int year ,int n ,int leapstore[]){
    int i;
    for(i = 0 ; i < n ; i++){
        if(leapstore[i] == year){
            return 1;            
        }
    }
    return 0;
}
int main (){
    int y , year , n ,count = 0,i;
    printf("總共旅行閏年數\n");
    scanf("%d", &n);
    int leapstore[n] ;
    for(i = 0 ; i < n ; i ++){
        leapstore[i] = 0;
    }
    printf ( "輸入旅行年份\n" ) ;
    while(count != n){     
        scanf ( "%d" , &year ) ;      
        if(year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 )){           
            if(judge( year ,n ,leapstore) == 1){
                printf("去同一個地方不好玩...\n");
            }else if (judge( year ,n ,leapstore) == 0){
                leapstore[count] = year;
                count = count + 1; 
                printf ( "已經去%d個年份旅行...\n",count ) ;
            }
        }else{
            printf("時光機無法到達...\n");
        }
    }
    printf("旅行事件簿\n");
    for(i = 0 ; i < n ; i ++){
        printf("%d \n",leapstore[i]);
    }
    return 0;
}
