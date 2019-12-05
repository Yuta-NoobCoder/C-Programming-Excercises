    #include <stdio.h>
    #include <math.h>
     
    double distance(int, int, int, int);
     
    int main(void){
      
      int x1, x2, y1, y2;
      double dist;
     
      printf("＜点1＞\n");
      printf("x座標：");
      scanf("%d" ,&x1);
      printf("y座標：");
      scanf("%d" ,&y1);
     
      printf("＜点2＞\n");
      printf("x座標：");
      scanf("%d" ,&x2);
      printf("y座標：");
      scanf("%d" ,&y2);
     
      printf("＜2点間の距離＞\n");
      dist = distance(x1, y1, x2, y2);
      printf("距離：%f\n", dist);
      return 0;
    }
     
    double distance(int x1, int y1, int x2, int y2){
      int diff_x, diff_y;
      double dist;
      diff_x = x2 - x1;
      diff_y = y2 - y1;
      dist = sqrt((diff_x * diff_x) + (diff_y * diff_y));
      return dist;
    }