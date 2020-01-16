#include <stdio.h>
#define N 10
#define M 10

typedef struct {
    int data[2];
    char id_num[M];
} DATA;

void average_calc(DATA d[], double mean[], int no);
int max_calc(double mean[], int no);

int main(void){
    DATA data[N];
    int num_data; //データの個数
    double avg[N]; //平均値
    int max_index; //最大値の添字

    printf("入力データ数を入力して下さい:");
    scanf("%d",&num_data);
    while(num_data < 0 || num_data > 10){
        printf("データ数が10を超えているか負です\n");
        printf("入力データ数を入力して下さい:");
        scanf("%d",&num_data);
    }
    //---------------------ID入力---------------------//
    for(int i=0; i<num_data; i++){
        printf("データNo.%2dのID番号:", i+1);
        scanf("%s", data[i].id_num);
    }

    printf("各IDのデータを入力して下さい\n");
    //---------------------データ入力---------------------//
    for(int i=0; i<num_data; i++){
        printf("%s\n", data[i].id_num);
        printf("データNo.%2d-a:", i + 1);
        scanf("%d", &data[i].data[0]);
        while(data[i].data[0] < 0 || data[i].data[0] > 100){
            printf("入力データが100を超えているか負です\n");
            printf("データNo.%2d-a:", i + 1);
            scanf("%d", &data[i].data[0]);
        }
        printf("データNo.%2d-b:", i + 1);
        scanf("%d", &data[i].data[1]);
        while(data[i].data[1] < 0 || data[i].data[1] > 100){
            printf("入力データが100を超えているか負です\n");
            printf("データNo.%2d-b:", i + 1);
            scanf("%d", &data[i].data[1]);
        }
    }
    //---------------------出力部----------------------//
    printf("\n入力された値を表示します\n");
    for(int i=0; i< num_data; i++) printf("[%s] (a)%4d (b)%4d\n", data[i].id_num, data[i].data[0], data[i].data[1]);
    //平均値
    printf("\n各データ組の平均値は以下の通りです\n");
    average_calc(data, avg, num_data);
    for(int i=0; i< num_data; i++) printf("[%s]%5.1f\n", data[i].id_num, avg[i]);
    //最大値
    max_index = max_calc(avg, num_data);
    printf("\n平均値の最大値は%sの%.1fです\n",data[max_index].id_num, avg[max_index]);
    return 0;
}

void average_calc(DATA d[],  double mean[], int no){
    for(int i=0; i<no; i++){
        mean[i] = ( d[i].data[0] + d[i].data[1] ) / 2.0;
    }
}

int max_calc(double mean[], int no){
    int max = mean[0];
    int i, max_i = 0;
    for(i=1; i<no; i++){
        if(mean[i] > max) max_i = i;
    }
    return max_i;
}