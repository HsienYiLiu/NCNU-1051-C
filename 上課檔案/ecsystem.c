#include <stdio.h>
void ecosystem(int f, int m)
{

    int n = 100, count;
    int system[n][n];
    int i, j, t;
    if (!system[f][m]) return;
    for (t = 0; t < n; t ++)
    {
        if (system[m][t] && system[t][f])
           if (( f > m && m > t ) ||( t > m && m > f ))
           {
             printf("%d %d %d\n", f + 1, m + 1, t + 1);
             count ++;
           }
    }
}
int main(){
    int n =  90;
    int i, j,count = 0;
    for (i = 0; i < n; i ++)
        for (j = 0; j < n; j ++)
        {
            ecosystem(i, j);
        }
    printf("total:%d\n\n", count);
}
