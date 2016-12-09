#include <stdio.h>
//判定是否為質數
long isPrime(long x) {
    long i;
    for ( i = 2; i < x; i++ ) {
        if ( x % i == 0 )
            return 0;
    }
    return 1;
}
//階層*
long facial(long n){
    long i,sum = 0;
    for(i = 1 ; i<= n ; i++){
        sum = sum + i*i;
    }
    return sum;
}
//產生質數陣列
long Primearray(long n,long primearray[]){
    //number每個質數，count放入幾個元素
    long number = 2,count = 0;
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
void seperate(long n,long primearray[]){
    long i = 0, count = 0;
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
long main(){
    long n;
    long primearray[500];
    scanf("%d", &n);
    Primearray(500,primearray);
    printf("Sum is : %d\n",facial(n));
    seperate(facial(n),primearray);
}
