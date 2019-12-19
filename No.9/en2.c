#include <stdio.h>
#define NUM 50

int main(void){
    char first_name[NUM] = "Daisuke";
    char family_name[NUM];
    printf("姓を入力して下さい:");
    scanf("%s", family_name);
    printf("< 2つの文字列を表示します >\n");
    printf("姓:%s\n", family_name);
    printf("名:%s\n", first_name);
    return 0;
}