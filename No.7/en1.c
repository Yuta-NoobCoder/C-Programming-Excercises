#include <stdio.h>
#define SIZE 20

int max_array(int score[], int n);

int main(void){
    int num, max;
    int score[SIZE];
    printf("試験の最高点を計算します，人数を入力してください（1～20）:");
    scanf("%d", &num);
    //点数入力
    for(int i=0; i<num; i++){
        printf("No.%d:", i+1);
        scanf("%d", &score[i]);
    }
    max = max_array(score, num);
    printf("%d人の最高点は%d点です\n", num, max);
    return 0;
}

int max_array(int score[], int n){
    int max;
    //仮の最大値
    max = score[0];
    for(int i=1; i<n; i++){
        if(score[i] > max) max = score[i];
    }
    return max;
}