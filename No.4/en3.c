    #include <stdio.h>
     
    int get_month(void);
     
    int main(void){
      printf("誕生日は何月ですか\n");
      printf("月：");
      int result = get_month();
      printf("あなたは%d月生まれですね\n", result);
      return 0;
    }
     
    int get_month(void){
      int month;
      scanf("%d", &month);
      while(month < 1 || 12 < month) {
        printf("入力ミスです！\n");
        printf("月：");
        scanf("%d", &month);
      }
      return month;
    }