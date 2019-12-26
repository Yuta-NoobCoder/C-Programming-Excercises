#include <stdio.h>
#define MAXLEN 20

int main( void ){
  int i;
  char name[MAXLEN];

  printf("名前を入力して下さい:");
  scanf("%s",name);

  /* ----変換指定子%cを用いて出力する場合---- */
  printf("< 出力例 No.1 >\n");
  for( i = 0; name[i] != '\0'; i++ )
    printf("name[%d]=%c\n", i, name[i]);

  /* ----変換指定子%sを用いて出力する場合---- */
  printf("< 出力例 No.2 >\n");
  printf("name=%s\n",name);

  return 0;
}