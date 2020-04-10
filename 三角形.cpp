#include<stdio.h>
#include<stdlib.h>
int main() {
   int a, b, c;
   printf("請輸入邊長A："); scanf("%d", &a);
   printf("請輸入邊長B："); scanf("%d", &b);
   printf("請輸入邊長C："); scanf("%d", &c);
   if( a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b ){
      if( a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b )
         printf("此三角形為直角三角形\n");
      else if( a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b )
         printf("此三角形為頓角三角形\n");
      else if( a * a < b * b + c * c || b * b < a * a + c * c || c * c < a * a + b * b )
         printf("此三角形為銳角三角形\n");
   } else
      printf("這不是一個三角形唷\n");
   system("pause");
   return 0;
}


