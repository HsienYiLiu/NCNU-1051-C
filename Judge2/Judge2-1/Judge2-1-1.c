#include <stdio.h>
int facial(int n){
    int i,sum = 0;
    for(i = 1 ; i<= n ; i++){
        sum = sum + i*i;
    }
    return sum;
}
void seperate(int n){
    int i = 2, count = 0;
    while(n != 1){
        count = 0;
        while(n % i == 0){
            count++;
            n = n/i;
        }
        if(count!=0){
            printf("(%d^%d) ",i,count);
        }
        i++;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    printf("Sum is : %d\n",facial(n));
    seperate(facial(n));
}
