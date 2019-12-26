#include <stdio.h>
#define NSIZE 3
#define MSIZE 5

int main( void ){
  int i, j;
  int score[NSIZE][MSIZE];

  printf("3人の得点を科目順に入力\n");
  printf("英語 数学 理科 国語 社会\n");                       //(1)
  for( i = 0; i < NSIZE; i++ ) {
    printf("No.%d\n",i + 1);
    for( j = 0; j < MSIZE; j++ ) {
      scanf("%d",&score[i][j]);
    }
  }
  printf("3人の得点を科目順に表示\n");
  printf("      英語 数学 理科 国語 社会\n");                 //(2)
  for( i = 0; i < NSIZE; i++ ) {
    printf("No.%d:", i + 1);
    for( j = 0; j < MSIZE; j++ ) {
      printf("  %d", score[i][j]);                                 //(3)
      //行終端
      if(j == MSIZE - 1) printf("\n");
      else printf(",");
    }
  }
  return 0;
}