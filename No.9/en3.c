#include <stdio.h>
#define NUM 50

int main(void){
    char first_name[NUM] = "Daisuke";
    char family_name[NUM];
    int num_char;
    printf("名の字数を入力して下さい:");
    scanf("%d", &num_char);
    //名
    for(int i=0; i<num_char; i++){
        printf("first_name[%d]=",i);
        scanf("%*c%c", &first_name[i]);
    }
        first_name[num_char] = '\0';

    printf("姓の字数を入力して下さい:");
    scanf("%d", &num_char);
    for(int i=0; i<num_char; i++){
        printf("family_name[%d]=",i);
        scanf("%*c%c", &family_name[i]);
    }
        family_name[num_char] = '\0';


    printf("\n選手の氏名は\n");
    printf("姓:%s\n", family_name);
    printf("名:%s\n", first_name);
    return 0;
}