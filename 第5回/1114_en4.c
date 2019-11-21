#include <stdio.h>
 
int max3(int x, int y, int z);
 
int main(void) {
    int num1, num2, num3;
    int max;
 
    printf("関数max3による3つの整数の最大値の計算\n");
    printf("3つの整数を入力してください\n");
    printf("1:");
    scanf("%d", &num1);
    printf("2:");
    scanf("%d", &num2);
    printf("3:");
    scanf("%d", &num3);
    
    max = max3(num1, num2, num3);
    printf("最大値は%dです\n", max);
 
    return 0;
}
 
int max3(int x, int y, int z) {
    int max = x;
    if(max < y) max = y;
    if(max < z) max = z;
    return max;
}