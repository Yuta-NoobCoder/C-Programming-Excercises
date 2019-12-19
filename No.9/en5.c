#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 4
#define NUM_CHAR 100
int main(void){
    
    char name[NUM_STUDENTS][NUM_CHAR]; //名前
    char pref[NUM_STUDENTS][NUM_CHAR]; //出身都道府県
    char isSearch[NUM_CHAR];
    char serach_str[NUM_CHAR];
    int cnt = 0;

    for(int i=0; i<NUM_STUDENTS; i++){
        printf("[No.%d]\n", i + 1);
        printf("名前:");
        scanf("%s", name[i]);
        printf("出身地:");
        scanf("%s",pref[i]);
        printf("\n");
    }

    printf("検索しますか？（yes or no）:");
    scanf("%s",isSearch);
    while(isSearch[0] == 'y'){
        printf("検索する都道府県名を入力して下さい:");
        scanf("%s", serach_str);
        printf("\n<検索結果>\n");
       //該当する県名のデータを検索
        for(int i=0; i<NUM_STUDENTS; i++){
            if(strcmp(pref[i],serach_str) == 0) {
                printf("[No.%d]  %s  %s\n", i+1, pref[i], name[i]);
                cnt ++;
            }
        }
        //該当者なし
        if(cnt == 0) printf("該当者なし\n");
        cnt = 0;

        printf("\n検索しますか？（yes or no）:");
        scanf("%s",isSearch);
    }
    printf("終了\n");
    return 0;
}