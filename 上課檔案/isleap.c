
#include <stdio.h>
int isLeap(int y) {//宣告函數isLeap為檢查輸入的年份是否為閏年
    if (y % 400 == 0 ||y % 4 == 0 && y %100 != 0){
        return 1;
    }    
    return 0;
}
int main() {//主函數
    //declare y1,y2, counter,y
    int y1, y2, counter = 0;
    int y;
    //read in y1, y2
    scanf("%d%d", &y1, &y2);
    // for each y between y1 and y2
    for ( y = y1; y <= y2;y = y +1) {
        // check if year y is leap year 
        if (isLeap(y)) {
            counter = counter + 1;//if year is leap year,counter plus one 
        }
    }    
    printf("%d", counter);
    return 0;
}