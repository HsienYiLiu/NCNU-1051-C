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