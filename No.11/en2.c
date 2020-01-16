#include <stdio.h>
#define N 10

void average_calc(int data[][2], double mean[], int no);

int main(void){
    int data[N][2]; //値の組
    int num_data; //データの個数
    double avg[N]; //平均値

    printf("入力データ数を入力して下さい:");
    scanf("%d",&num_data);
    while(num_data < 0 || num_data > 10){
        printf("データ数が10を超えているか負です\n");
        printf("入力データ数を入力して下さい:");
        scanf("%d",&num_data);
    }
    for(int i=0; i<num_data; i++){
        printf("データNo.%2d-a:", i + 1);
        scanf("%d", &data[i][0]);
        while(data[i][0] < 0 || data[i][0] > 100){
            printf("入力データが100を超えているか負です\n");
            printf("データNo.%2d-a:", i + 1);
            scanf("%d", &data[i][0]);
        }
        printf("データNo.%2d-b:", i + 1);
        scanf("%d", &data[i][1]);
        while(data[i][1] < 0 || data[i][1] > 100){
            printf("入力データが100を超えているか負です\n");
            printf("データNo.%2d-b:", i + 1);
            scanf("%d", &data[i][1]);
        }
    }
    //---------------------出力部----------------------//
    printf("\n入力された値を表示します\n");
    for(int i=0; i< num_data; i++) printf("[No.%2d] (a)%4d (b)%4d\n", i+1, data[i][0], data[i][1]);
    //平均値
    printf("\n各データ組の平均値は以下の通りです\n");
    average_calc(data, avg, num_data);
    for(int i=0; i< num_data; i++) printf("[No.%2d]%5.1f\n", i+1, avg[i]);
}

void average_calc(int data[][2], double mean[], int no){
    for(int i=0; i<no; i++){
        mean[i] = ( data[i][0] + data[i][1] ) / 2.0;
    }
}