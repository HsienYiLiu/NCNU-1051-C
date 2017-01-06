#include <stdio.h>
//計算天數
int race(float H,float U,float D,float F){
    float nowHigh = 0.0, sub = U * F / 100;
    int judge = 0;
    int days = 1;
    while (1){
          //printf("%f\n", U );
          nowHigh += U;
          if (nowHigh > H) {
            printf("success on day %d\n", days);
            break;
          }
          nowHigh -= D;
          if (nowHigh < 0) {
            printf("failure on day %d\n", days);
            judge = 1;
            break;
          }
          U -= sub;
          if (U < 0){
              U = 0;
          }
          days ++;
    }
    //判斷成功或失敗
    if(judge == 0){
        return days;
    }else{
        return 100000;
    }
}
int main(){
    float H,U,D,F;
    int p2_days,p1_days;
    int n = 2;
    while (n != 0){
        printf("請輸入天天狀況\n");
        scanf("%f %f %f %f", &H, &U, &D, &F);
        p1_days = race(H,U,D,F);
        printf("請輸入阿萬狀況\n");
        scanf("%f %f %f %f", &H, &U, &D, &F);
        p2_days = race(H,U,D,F);
        n = 0;
    }
    if(p1_days == p2_days){
        printf("平手(灑花)");
    }else if (p1_days < p2_days) {
        printf("天天 win");
    }else{
        printf("阿萬 win");
    }
}