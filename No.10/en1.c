#include <stdio.h>

struct student {
    int id;
    char name[100];
};

int main(void){
    struct student taro = {296000 ,"Taro"};
    printf("学生番号:%d\n", taro.id);
    printf("氏名:%s\n", taro.name);
    return 0;
}