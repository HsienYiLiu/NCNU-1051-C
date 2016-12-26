#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int money = 100;   
    int bet;	
    char first[7] = {'o' , 'x' , '=' , '+' , '@' , '$' , '?'}; 
    char second[7] = {'o' , 'x' , '=' , '+' , '@' , '$' , '?'};
    char third[7] = {'o' , 'x' , '=' , '+' , '@' , '$' , '?'};
    int one;
    int two;
    int three;

    while(1){
        one = rand()%7;
        two = rand()%7;
        three = rand()%7;
        printf("pocket:%d\n",money);
        printf("put how much to bet:\n");
        scanf("%d",&bet);
        while( bet > money ){
            printf("you don't have enough money,please input again:\n");
            scanf("%d",&bet);
        }
        printf("result:");
        printf("%c",first[one]);
        printf(" | ");
        printf("%c",second[two]);
        printf(" | ");
        printf("%c \n",third[three]);
        if(one == two && two == three){
            money = money - bet + bet * 100;
        }else if(one == two || two == three || three == one){
            money = money - bet + bet*10;
        }else{
            money = money - bet;
        }
        if(money <= 0){
            printf("you break out!\n");
            break;
        }   
    }
    
}
