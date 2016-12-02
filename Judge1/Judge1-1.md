# 上機考 Judge 1-1

## 故事背景
> 阿萬, 時空旅行者，年齡不詳，在一次跟隨天天的旅行當中，意外來到二戰時期的地雷區，阿萬他一步也不敢動，怕失去了他的雙腳，但這個時候他想起小時候最愛玩的電腦小遊戲 - 踩地雷


![](https://i.imgur.com/jH16niY.png)


## 輸入說明
- 輸入 `w` 地雷區的寬度
- 輸入 `h` 地雷區的長度
- 輸入 `n` 地雷區裡面的地雷數

## 輸出說明
- 產生一個 w*h 的地圖，並隨機置放 n 個地雷
- *代表地雷
- 數字代表八個方向的地雷數總和
#### 範例：
![](https://i.imgur.com/ST66nQd.png)


## Solution
```C=
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gen(char map[], int w, int h, int n) {
    int count = 0;
    int i;
    for (i = 0 ; i < w*h; i++) {
        // wall
        if (i / w == 0 || i / w == h-1 || i % w == 0 || i % w == w-1)
            map[i] = 'W';
        // land
        else
            map[i] = '.';
    }
    // random generate landmiles
    while (count < n) {
        int r = rand() % (w*h);
        if (map[r] == '.') {
            map[r] = '*';
            count++;
        }
    }
}
void flag(char map[], int w, int h) {
    int i, j;
    int ways[8] = {-w-1, -w, -w+1, -1, +1, +w-1, +w, +w+1};
    for (i = 0; i < w*h; i++) {
        if (map[i] == '.') {
            int count = 0;
            for (j = 0; j < 8; j++) {
                if (map[ i + ways[j] ] == '*')
                    count++;
            }
            map[i] = '0' + count;
        }
    }
}
void print(char map[], int w, int h) {
    int i;
    for (i = 0; i < w*h; i++) {
        if (map[i] != 'W')
            printf("%c ", map[i]);
        if ((i % w) == w-2) 
            printf("\n");
    }
}
int main() {
    int w, h, n;
    scanf("%d %d %d", &w, &h, &n);
    char map[(w+2) * (h+2)];
    srand(time(NULL));
    gen(map, w+2, h+2, n);
    flag(map, w+2, h+2);
    print(map, w+2, h+2);
    return 0;
}
```
By ~sky~
