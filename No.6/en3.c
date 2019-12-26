#include <stdio.h>
#define SIZE 10

int main(void){

    int i;
    int sum = 0;
    int max, min, max_i, min_i;
    int array[SIZE];

    for(i=0; i<SIZE; i++){
        if(i == 0){
            printf("データ[No.%2d]を入力してください: ", i + 1);
            scanf("%d", &array[i]);
            //仮の最大・最小値
            max = min = array[i];
            max_i = min_i = i;
        }else {
            printf("データ[No.%2d]を入力してください: ", i + 1);
            scanf("%d", &array[i]);
            if(array[i] > max){
                max = array[i];
                max_i = i;
            }
            if(array[i] < min){
                min = array[i];
                min_i = i;
            }
        }
        sum += array[i];
    }

    printf("\n");
    printf("データ一覧:\n");

    for(i=0; i<SIZE; i++){
         printf("[No.%2d] %d\n", i + 1, array[i]);
    }
    printf("\n");
    printf("平均値 = %.2f\n", (double)sum / SIZE);
    printf("最大値 = %d (no.%d)\n", max, max_i + 1);
    printf("最小値 = %d (no.%d)\n", min, min_i + 1);
    return 0;
}