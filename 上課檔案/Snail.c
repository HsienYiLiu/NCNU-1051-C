#include <stdio.h>
int race(float H,float U,float D,float F){
    float nowHigh = 0.0, sub = U * F / 100;
    int judge = 0;
    int days = 1;
    while (nowHigh >= 0 && nowHigh < H){	
		//printf("%f\n", U );
		nowHigh += U;
		nowHigh -= D;
		U -= sub;
		if (U < 0){
			U = 0;
		}
		days ++;
    }
    if (nowHigh > H) {
      printf("success on day %d\n", days);
    }
    if (nowHigh < 0) {
      printf("failure on day %d\n", days);
      judge = 1;
    }

    if(judge == 0){
        return days;
    }else{
        return 1000000;
    }
}
int main(){
    float H,U,D,F;
    int p2_days,p1_days;
	printf("�п�J�ѤѪ��p\n");
	scanf("%f %f %f %f", &H, &U, &D, &F);
	p1_days = race(H,U,D,F);
	printf("�п�J���U���p\n");
	scanf("%f %f %f %f", &H, &U, &D, &F);
	p2_days = race(H,U,D,F);    
    if(p1_days == p2_days){
        printf("����(�x��)");
    }else if (p1_days < p2_days ) {
          printf("�Ѥ� win");
    }else{
          printf("���U win");
    }
}
