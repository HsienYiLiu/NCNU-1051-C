#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int card[52];
    int i;
    float sum = 0;
    char color[] = {'S','H','D','C'};
    char number[] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    float num[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 0.5, 0.5, 0.5};
    srand(time(NULL));
    for(i = 0;i < 52;i++) {
        card[i] = i;
    //洗牌
    }
    for(i = 0;i < 1000;i++) {
        int x = rand() % 52;
        int y = rand() % 52;
        int tmp = card[x];
        card[x] = card[y];
        card[y] = tmp;
    }
    int count = 0;
    char answer = 'Y';
    char hand_color[5];
    char hand_num[5];
    hand_color[count] = color[card[count] / 13];
    hand_num[count] = number[card[count] % 13];
    printf("%c%c\n", hand_color[count], hand_num[count]);
    sum = sum + num[card[count] % 13];
    printf("Y or N? ");
    scanf("%c", &answer);
    while(sum <= 21 && answer == 'Y') {
        count++;
        hand_color[count] = color[card[count] / 13];
        hand_num[count] = number[card[count] % 13];
        printf("%c%c\n", hand_color[count], hand_num[count]);
        sum = sum + num[card[count] % 13];
        printf("Y or N? ");
        scanf(" %c", &answer);
    }
    printf("\n");
    if(sum > 21){
        printf("You are loser.");
    } else {
        printf("Your score is %lf", sum);
    }
}
