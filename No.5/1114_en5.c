#include <stdio.h>
 
int max3(int x, int y, int z);
int max33(int x, int y, int z);
 
int main(void) {
    int num1, num2, num3;
    int group;
    int i;
    int max;
 
    printf("関数max33による3つの整数の組の最大値の計算\n");
    printf("組数を入力してください\n");
    printf("組数:");
    scanf("%d", &group);
    for (i = 1; i <= group; i++) {
        printf("%d組\n", i);
        printf("1:");
        scanf("%d", &num1);
        printf("2:");
        scanf("%d", &num2);
        printf("3:");
        scanf("%d", &num3);
        max = max33(num1, num2, num3);
    }
 
    printf("%d組の整数の最大値は%dです\n", group, max);
 
    return 0;
}
 
int max3(int x, int y, int z) {
    int max = x;
    if(max < y) max = y;
    if(max < z) max = z;
    return max;
}
 
int max33(int x, int y, int z) {
    static int max; /* 最大値を保持するstatic変数 */
    static int count = 0; /* 関数max33が初めて呼ばれたかどうか判定するstatic変数 */
    int tmp;
    if (count == 0) { /* 関数が初めて呼ばれたときの処理 */
     max = max3(x,y,z);
     count = 1;
    } else { /* 関数が2回目以降に呼ばれたときの処理 */
    if(max < x) max = x;
    if(max < y) max = y;
    if(max < z) max = z;
    }
 
    return max;
}