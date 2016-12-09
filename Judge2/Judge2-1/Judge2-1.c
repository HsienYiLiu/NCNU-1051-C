#include <stdio.h>
//判定是否為質數
int isPrime(int x) {
    int i;
    for ( i = 2; i < x; i++ ) {
        if ( x % i == 0 )
            return 0;
    }
    return 1;
}
//階層*
int facial(int n){
    int i,sum = 0;
    for(i = 1 ; i<= n ; i++){
        sum = sum + i*i;
    }
    return sum;
}
//產生質數陣列
int Primearray(int n,int primearray[]){
    //number每個質數，count放入幾個元素
    int number = 2,count = 0;
    while(count < n){
        while(!isPrime(number)){
            number++;
        }
        primearray[count] = number;
        count++;
        number++;
    }
}
//質因數分解
void seperate(int n,int primearray[]){
    int i = 0, count = 0;
    while(n != 1){
        count = 0;
        while(n % primearray[i] == 0){
            count++;
            n = n/primearray[i];
        }
        if(count!=0){
            printf("(%d^%d) ",primearray[i],count);
        }
        i++;
    }
}
int main(){
    int n;
    int primearray[500];
    scanf("%d", &n);
    Primearray(500,primearray);
    printf("Sum is : %d\n",facial(n));
    seperate(facial(n),primearray);
}
