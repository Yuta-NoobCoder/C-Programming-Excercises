#include <stdio.h>
#define SIZE 10

void add_data(int array[], int n);

int main(void){
    int num;
    int data[SIZE];
    printf("データ数を入力して下さい（1～10）:");
    scanf("%d",&num);
    printf("データを入力して下さい\n");
    for(int i=0; i<num; i++){
        printf("No.%d:", i+1);
        scanf("%d", &data[i]);
    }
    add_data(data, num);
    printf("計算して並べました\n");
    for(int i=0; i<num; i++){
        printf("No.%d:%d\n", i+1, data[i]);
    }
    return 0;
}

void add_data(int array[], int n){    
    array[0] = array[0] * 10;
    for(int i=1; i<n; i++){
        array[i] =  array[i] * 10 + array[i-1];
    }
}