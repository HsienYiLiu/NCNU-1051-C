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
    printf("�`�@�Ȧ�|�~��\n");
    scanf("%d", &n);
    int leapstore[n] ;
    for(i = 0 ; i < n ; i ++){
        leapstore[i] = 0;
    }
    printf ( "��J�Ȧ�~��\n" ) ;
    while(count != n){     
        scanf ( "%d" , &year ) ;      
        if(year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 )){           
            if(judge( year ,n ,leapstore) == 1){
                printf("�h�P�@�Ӧa�褣�n��...\n");
            }else if (judge( year ,n ,leapstore) == 0){
                leapstore[count] = year;
                count = count + 1; 
                printf ( "�w�g�h%d�Ӧ~���Ȧ�...\n",count ) ;
            }
        }else{
            printf("�ɥ����L�k��F...\n");
        }
    }
    printf("�Ȧ�ƥ�ï\n");
    for(i = 0 ; i < n ; i ++){
        printf("%d \n",leapstore[i]);
    }
    return 0;
}
