#include <stdio.h>
int main(int argv,char *argc[]){
    int i;
    for(i = 0; i < argv ; i++){
        printf("%s\n", argc[i]);
    }
    for(i = 0; i < argv ; i++){
        printf("%c\n", *argc[i]);
    }
}
