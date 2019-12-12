#include <stdio.h>
#define FLOOR 3
#define ROOMS 4

int main(void){
    int age[FLOOR][ROOMS];
    printf("住人の年齢を入力して下さい\n");
    for(int i=0; i<FLOOR; i++){
        printf("<< %d階 >>\n", i+1);
        for(int j=0; j<ROOMS; j++){
            printf("%d号室:", j+1);
            scanf("%d",&age[i][j]);
        }
    }
    printf("\n<< 年齢見取図 >>\n");
    for(int i= FLOOR; i>0; i--){
        printf("[%d階] ",i);
        for(int j=0; j<ROOMS; j++){
            printf("(%d号室)%d歳",j+1,age[i-1][j]);
            //行終端
            if(j == ROOMS - 1) printf("\n");
            else printf(" ");
        }
    }
    return 0;
}