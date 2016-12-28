#include <stdio.h>
int isPrime(int x) {
    int i;
    for ( i = 2; i < x; i++ ) {
        if ( x % i == 0 )
            return 0;
    }
    return 1;
}
int cipher(int key, int num) {
    int cipher_number = 0;
    while (num != 0){
        key = (key + (num % 10)) % 10;
        cipher_number =  cipher_number * 10 + key;
        num = num / 10;
    }
    return cipher_number;
}
int main() {
    int key, num;
    scanf("%d",&key);
    scanf("%d",&num); 
    printf("%d\n", cipher(key, num));
	if(isPrime(cipher(key, num)) == 1) {
		printf("這間廁所可以上");
	} else{
		printf("對不起，請找別間廁所");
	}
}