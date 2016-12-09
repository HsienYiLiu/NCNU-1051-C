#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void head(int * lori, int num) {
    int person;
    for (int i = 0; i < num; i++) {
        printf("蘿莉%d ", i+1);
    }
    printf("\n摸頭: ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &person);
        lori[person-1] += 100;
    }
}

void gift(int * lori, int num) {
    int favor, who;
    printf("送禮物:\n");
    while (1) {
        printf("好感度: ");
        scanf("%d", &favor);
        if (favor > 500) {
            printf("warning: 禮物上限為 500\n");
        } else {
            printf("給誰: ");
            scanf("%d", &who);
            lori[who-1] += favor;
            break;
        }
    }
}

void date(int * lori) {
    int person, place[] = {35, 100, 410, 700}, date_place;
    srand(time(NULL));
    printf("約會: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &person);
        date_place = rand() % 4;
        lori[person-1] += place[date_place];
        printf("場所%d ", date_place+1);
    }
}

void print(int * lori, int num) {
    printf("\n-- 目前所有蘿莉的好感度 --\n");
    for (int i = 0; i < num; i++) {
        printf("蘿莉%d : %d\n", i+1, lori[i]);
    }
}

int main() {
    int lori[] = {0, 0, 0, 0, 0};
    head(lori, 5);
    gift(lori, 5);
    date(lori);
    print(lori, 5);
    return 0;
}
