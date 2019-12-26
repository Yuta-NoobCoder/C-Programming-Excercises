#include <stdio.h>
#define NUM 1000

int get_length(char str[]);

int main(void){
    char str[NUM];
    int length;
    printf("文字列:");
    scanf("%s", str);
    length = get_length(str);
    printf("文字列の長さ:%d\n",length);
    printf("文字列（逆順）:%s.", str);
    for(int i=1; i<=length; i++){
        printf("%c", str[length - i]);
    }
    printf("\n");
    return 0;
}

int get_length(char str[]){
    int cnt = 0;
    while(str[cnt] != '\0') cnt++;
    return cnt;
}