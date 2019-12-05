#include <stdio.h>
#define SIZE 20

void get_score( int score[ ], int n);
void error_message(int point);
void show_array( int array[ ], int n);
int max_array(int array[ ], int n);
int min_array(int array[ ], int n);
double average_array(int array[ ], int n);

int main(void){
    int score[SIZE];
    int num;   
    printf("データ数を入力してください（1～20）:");
    scanf("%d",&num);
    get_score(score, num);
    printf("\n");

    printf("データを表示します\n");
    show_array(score, num);
    printf("\n");

    printf("最大値は%dです\n", max_array(score, num));    
    printf("最小値は%dです\n", min_array(score, num));
    printf("平均値は%.1fです\n", average_array(score, num));
    return 0;
}

void get_score( int score[ ], int n){
    int num;
    for(int i=0; i<n; i++){
        printf("No.%d:", i+1);
        scanf("%d", &num);
        while(num < 0 || num > 100){
            error_message(num);
            printf("No.%d:", i+1);
            scanf("%d", &num);
        }
        score[i] = num;
    }
}

void error_message(int point){
    if(point < 0) printf("****入力ミス:%dは0未満です****\n", point);
    else if(point > 100) printf("****入力ミス:%dは100をこえています****\n",point);
}

void show_array( int array[ ], int n){
    for(int i=0; i<n; i++){
        printf("No.%d:%d\n", i+1, array[i]);
    }
}

int max_array(int array[ ], int n){
    int max;
    max = array[0];
    for(int i=0; i<n; i++){
        if(array[i] > max) max = array[i];
    }
    return max;
}

int min_array(int array[ ], int n){
    int min;
    min = array[0];
    for(int i=0; i<n; i++){
        if(array[i] < min) min = array[i];
    }
    return min;
}

double average_array(int array[ ], int n){
    int sum;
    for(int i=0; i<n; i++){
        sum += array[i];
    }
    return (double)sum / n;
}