
#include <stdio.h>
//to judge which is odd or even and calculate the times
int times(int x){
    //set as answer,start by one because need to calculate the first time too
    int a = 1; 
    while(x > 1){     
        //if it is even /2
        if ((x%2)==0){
            x = x / 2 ;
        //if it is odd *3+1
        }else if((x%2)!=0){
            x = 3*x + 1;
        }
        //calculate times +1
        a = a + 1;
    }
    //return answer a
    return a;
}

int main(){
    //set as first number
    int a;
    //set as second number
    int b;
    //set as memory
    int m;
    //set as number
    int answer = 0;
    //input numbers
    scanf ("%d", &a);
    scanf ("%d", &b);

    //to compare which is the biggest repeatly
    for (m = a; m <= b; m = m + 1){
        if(answer < times(m)){
            answer = times(m);
        }
    }
    //printf the answer
    printf ("%d %d %d\n", a, b, answer);
    return main();
}