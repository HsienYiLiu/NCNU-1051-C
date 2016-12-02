
#include <stdio.h>
void print (char c, int n){
    int i;
    for (i = 1; i <= n; i = i +1){
        printf ("%c", c);    
    }    
}
int main (){
    int n;
    int i;
    scanf ("%d", &n);
    
    for (i = 1; i <= n; i = i +1){//print triangle
        print (' ', n - i);
        print ('*', 2 * i - 1);
        printf ("\n", 1);
    }
    for (i = n - 1; i >= 1; i = i - 1){//print upper triangle
        print (' ',n - i);
        print ('*',2 * i - 1);
        printf ("\n",1);
    } 
    return 0;
}