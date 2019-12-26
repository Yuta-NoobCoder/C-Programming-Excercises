    #include <stdio.h>
     
    void draw_char(int, int);
     
    int main(void){
      int a_num, s_num;
      printf("アスタリスクの数：");
      scanf("%d", & a_num);
      printf("シャープの数：");
      scanf("%d", & s_num);
      draw_char(a_num, s_num);
      return 0;
    }
     
    void draw_char(int a_number, int s_number){
      int i;
      for(i=0; i< a_number; i++) printf("*");
      for(i=0; i< s_number; i++) printf("#");
      printf("\n");
    }

