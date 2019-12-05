#include <stdio.h>

void substract_vector(int a[], int b[], int result[]);

int main(void){
    int vector_a[3] = {-1, 2, 1};
    int vector_b[3] = {2, 0, -2};
    int result[3];
    substract_vector(vector_a, vector_b, result);
    printf("substraction = (%d, %d, %d)\n", result[0], result[1], result[2]);

    return 0;
}

void substract_vector(int a[], int b[], int result[]){
    int i;
    for(i=0; i<3; i++) result[i] = a[i] - b[i];
}