#include <stdio.h>
#define SIZE 10

int main(void){

    int i;
    int search;
    int array[SIZE];
    int array_equals[SIZE] = {0};
    int num_equals = 0;
    int array_more[SIZE] = {0};
    int num_more = 0;
    int array_less[SIZE] = {0};
    int num_less = 0;

    for(i=0; i<SIZE; i++){
        printf("データ[No.%2d]を入力してください: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\n");
    printf("検索用データを入力してください: ");
    scanf("%d",&search);

    //検索データとの大小関係を判定
    for(i=0; i< SIZE; i++){
            //小さい場合
            if(search > array[i]) {
                array_less[num_less] = array[i];
                num_less++;
            } 
            //大きい場合
            if (search < array[i]) {
                array_more[num_more] = array[i];
                num_more++;
            }
            //等しい場合
            if (search == array[i]){
                array_equals[num_equals] = array[i];
                num_equals++;
            }
    }

    printf("\n");
    printf("検索結果\n");
    printf("検索データ: %d\n", search);
    printf("検索データより小さいデータ: ");
    for(i=0; i<num_less; i++){
        printf("%d",array_less[i]);
        //末尾判定
        if(i != num_less - 1) printf(",");
    }
    printf("\n");
    printf("検索データと等しいデータ: ");
    for(i=0; i<num_equals; i++){
        printf("%d",array_equals[i]);
        //末尾判定
        if(i != num_equals - 1) printf(",");
    }
    printf("\n");
    printf("検索データより大きいデータ: ");
    for(i=0; i<num_more; i++){
        printf("%d",array_more[i]);
        //末尾判定
        if(i != num_more - 1) printf(",");
    }
    printf("\n");
    return 0;
}