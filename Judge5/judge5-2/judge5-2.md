﻿### 故事背景
>阿樺因為商店街的飲料大胃王比賽，喝了太多的飲料，而想上廁所。現在他看到眼前有一間廁所，最可恨的是，居然還要解密碼，而且要解密碼就算了，解出來的數字還要是質數才可以上。阿樺是否能上廁所，就只有你能幫她了。

### 題目
廁所上方有一個 key 和一串數字，先把數字反轉。然後第 1 碼加上 key 就可以產生出第 1 個密碼，下一碼就是前面產生出的密碼加上現在下一位的數字。如果加出來的數字超過 10，就取個位數。
>ex: key 是 3 數字是 25，先把 25 反轉變成 52，然後第 1 個數字加上 3 變成 8，第 2 個數字加上 8 變成 10，然後得到 0，所以密碼是 80。

### 輸入
```
key 數字
```

### 輸出
```
密碼
能否上廁所
```

### 範例
```
3 956366
958498
對不起，請找別間廁所

6 756843
931729
這間廁所可以上
```

###### tags: `程設` `1051` `上機考` 