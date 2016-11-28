#include <stdio.h>
// 設定n皇后棋盤初始值
void init(char board[], int n) {
    int i;
    // 先把所有的值設為0
    for (i = 0; i < (n+2) * (n+2); i++)
        board[i] = 0;
    // 把四個邊設為-1
    for (i = 0; i < n + 2; i++) {
        board[i] = -1; //上邊
        board[(n+1)*(n+2) + i] = -1; // 下邊
        board[i*(n+2)] = -1; // 左邊
        board[i*(n+2) + n + 1] = -1; // 右邊
    }
}
/**
 * board: 棋盤狀態
 * n: 幾皇后問題
 * put: 已經放了幾個皇后上去了
 */
void queen2(char board[], int n, int put) {
    // 終止條件?
    if (n == put) {
        return;
    }
    // 如何放上下一個皇后?
    // 這個皇后應該放到哪個row? put + 1
    int i;
    // 這個row有n個位置可能可以放
    for (i = 1; i <= n; i++) {
        // puton代表試圖擺放的位置
        int puton = (put+1)*(n+2) + i;
        // 如果這位置不會被任何皇后吃到
        if (board[puton] == 0) {
            // 那就把皇后擺上去
            board[puton] = 'Q';
            // 請問有幾個方向?
            int dir[] = {n+1, n+2, n+3};
            // 設定下方的勢力範圍
            int j, pos;
            // pos是要檢查的位置
            for (j = 0; j < 3; j++) {
                // 由放上皇后的下一個位置開始檢查
                // 把檢查的位置的值+1,一直到邊界為止
                for (pos = puton+dir[j]; board[pos]>=0; pos += dir[j])
                    board[pos]++;
            }
            // 遞迴呼叫好放下一個皇后
            queen2(board, n, put + 1);
            // 移除下方的勢力範圍
            for (j = 0; j < 3; j++) {
                // 由放上皇后的下一個位置開始檢查
                // 把檢查的位置的值-1,一直到邊界為止
                for (pos = puton+dir[j]; board[pos]>=0; pos += dir[j])
                    board[pos]--;
            }
            // 把皇后移走
            board[puton] = 0;
        }
    }
}
// 解n皇后問題
void queen(int n) {
    // 設定棋盤初始值
    char board[(n+2)*(n+2)];
    init(board, n);
    // 呼叫遞迴程式
    queen2(board, n, 0);
}
void main() {
    queen(8);
}
