#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int i, j, gift, toWho, date, loli[5], head;
    while(1) {
        for (i = 0; i < 5; i++) {
            printf("蘿莉：%d ", i + 1);
        }
        printf("\n摸頭: ");
        for (i = 0; i < 5; i++) {
            loli[i] = 0;
        }
        for (i = 0; i < 5; i++) {
            scanf("%d", &head);
            loli[head - 1] = loli[head - 1] + 100;
        }
        printf("送禮物:\n");
        scanf("%d", &gift);
        while(gift > 500) {
            printf("warning: limit is 500\n");
            scanf("%d", &gift);
        }
        printf("To who? ");
        scanf("%d", &toWho);
        loli[toWho - 1] = gift + loli[toWho - 1];

        int place[] = {35, 100, 410, 700};
        int random[3];
        for(i = 0; i < 3; i++) {
            scanf("%d", &date);
            random[i] = rand() % 4;
            loli[date - 1] = loli[date - 1] + place[random[i]];
        }
        for(i = 0; i < 3; i++) {
            printf("場所:%d ", random[i] + 1);
        }
        printf("\n\n目前所有蘿莉的好感度 \n");
        for (i = 0; i < 5; i++) {
            printf("蘿莉%d: %d\n", i + 1, loli[i]);
        }
    }
}
