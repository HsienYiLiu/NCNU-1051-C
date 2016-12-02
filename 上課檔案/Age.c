#include <stdio.h>
void sayFutureAge(int a, int g){
    printf("future age is %d" , a+g);
}
int main(){
    int age,grade;
	printf("your age :");
    scanf("%d" , &age);
    printf("your age is %d\n" , age);
	printf("your grade :");
    scanf("%d" , &grade);
    sayFutureAge(age,grade);
    return 0;
} 