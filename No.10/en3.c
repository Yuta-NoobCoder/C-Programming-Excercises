#include <stdio.h>
#define NUM 5

struct grade {
    int id;
    //0:数学 1:英語 2:物理
    int score[3];
};

int main(void){
    struct grade students[NUM];
    int total[NUM] = {0};
    int sum = 0;
    int max, min;
    double avg;
    //入力
    for(int i=0; i<NUM; i++){
        printf("%d人目の学生番号は?:", i+1);
        scanf("%d", &students[i].id);
        printf("数学の点数は?:");
        scanf("%d", &students[i].score[0]);
        printf("英語の点数は?:");
        scanf("%d", &students[i].score[1]);
        printf("物理の点数は?:");
        scanf("%d", &students[i].score[2]);
        //合計点計算
        for(int j=0; j<3; j++){
            total[i] += students[i].score[j];
        }
    }
    //最高点・最低点計算
    //仮の最高・最低点
    max = min = total[0];
    for(int i=1 ;i<NUM; i++){
        if(total[i] > max) max = total[i];
        if(total[i] < min) min = total[i];
    }
    //平均点計算
    for(int i=0; i<NUM; i++){
        sum += total[i];
    }
    avg = (double)sum / NUM;

    //出力
    printf("\n学生番号 数学 英語 物理 合計\n");
    for(int i=0; i<NUM; i++){
        printf("%8d%5d%5d%5d%5d\n", students[i].id, students[i].score[0], students[i].score[1], students[i].score[2], total[i]);
    }
    printf("最高点は%d点\n",max);
    printf("最低点は%d点\n",min);
    printf("平均点は%.2f点\n",avg);
    return 0;
}