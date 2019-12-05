#include <stdio.h>
#define SIZE 5

int main(void){

    int i,sum = 0;
    int array[SIZE] = {5,4,3,2,1};

    for(i=0; i<SIZE; i++){
        sum += array[i];
    }

    printf("arrayの合計値 = %d", sum);
    return 0;
}