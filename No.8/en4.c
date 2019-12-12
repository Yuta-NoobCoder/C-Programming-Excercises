#include <stdio.h>
#define NUM 10
void read_score(int score[][3], int n);
void show_score(int score[][3], int subject, int n);

int main(void){
    int score[NUM][3];
    int num;
    int subject;
    printf("学生数を入力して下さい（1～10）\n");
    printf("学生数:");
    scanf("%d",&num);

    read_score(score, num);
    printf("\n");

    printf("得点表を表示する科目を選択して下さい\n");
    printf("英語=>1,数学=>2,国語=>3,終了=>0:");
    scanf("%d", &subject);
    printf("\n");
    while(subject != 0){
        show_score(score, subject, num);
        printf("\n");
        printf("得点表を表示する科目を選択して下さい\n");
        printf("英語=>1,数学=>2,国語=>3,終了=>0:");
        scanf("%d", &subject);
        printf("\n");
    }
    
    printf("終了します\n");    
    return 0;
}

void read_score(int score[][3], int n){
    for(int i=0; i<n; i++){
        printf("%d番目の学生\n", i+1);
        for(int j=0; j<3; j++){
            do{
                switch (j) {
                    case 0 :
                        printf("(1)英語:");
                        break;
                    case 1 :
                        printf("(2)数学:");
                        break;  
                    case 2 :
                        printf("(3)国語:");
                        break;  
            }
        scanf("%d", &score[i][j]);
            }while(score[i][j] < 0 || score[i][j] > 100);
        }
    }
}

void show_score(int score[][3], int subject, int n){
    switch (subject) {
    case 1:
        printf("[英語]\n");
        break;
    case 2:
        printf("[数学]\n");
        break;
    case 3:
        printf("[国語]\n");
        break;
    }
    printf("番号  得点\n");
    for(int i=0; i<n; i++){
        printf("%d     %d\n", i+1, score[i][subject - 1]);
    }
}