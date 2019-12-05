    #include <stdio.h>
     
    void error_message(void);
     
    int main(void){
      int num;
      printf("奇数を入力して下さい：");
      scanf("%d", &num);
      if(num % 2 == 0) error_message();
      else printf("5は奇数です\n");
    }
     
    void error_message(){
      printf("入力ミスです！\n");
    }
