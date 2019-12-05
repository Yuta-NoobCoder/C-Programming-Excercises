    #include <stdio.h>
     
    void error_message(void);
    int get_month(void);
     
    int main(void){
      int current, birth;
      printf("＜誕生日の月＞\n");
      printf("月：");
      birth = get_month();
      printf("＜現在の月＞\n");
      printf("月：");
      current = get_month();
      
      if (birth == current) printf("今月が誕生日ですね\n");
        else if (birth > current) printf("誕生日まであと%dヶ月ですね\n", birth - current);
        else printf("誕生日まであと%dヶ月ですね\n", birth + (12 - current));
      return 0;
    }
     
    void error_message(void){
      printf("入力ミスです！\n");
    }
     
    int get_month(void){
      int month;
      scanf("%d", &month);
      while(month < 1 || 12 < month) {
        error_message();
        printf("月：");
        scanf("%d", &month);
      }
      return month;
    }