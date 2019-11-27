#include<stdio.h>
 
int gcd(int, int);
int lcm(int, int);
 
int main(void){
    int a,b, gcd_num, lcm_num;
    while(1){   
    printf("a:");
    scanf("%d",&a);
    if(a > 0 || a > 1000000000) break;
    }
    while(1){   
    printf("b:");
    scanf("%d",&b);
    if(b > 0 || b > 1000000000) break;
    }
    gcd_num = gcd(a,b);
    lcm_num = lcm(a,b);
    printf("aとbの最大公約数：%d\n",gcd_num);
    printf("aとbの最小公倍数：%d\n",lcm_num);
}
 
int gcd(int a, int b){
    if( a % b == 0) return b;
    else{
        return gcd(b, a % b);
    }
}
 
int lcm(int a, int b){
    return a * b / gcd(a,b);
}