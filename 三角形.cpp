#include<stdio.h>
#include<stdlib.h>
int main() {
   int a, b, c;
   printf("�п�J���A�G"); scanf("%d", &a);
   printf("�п�J���B�G"); scanf("%d", &b);
   printf("�п�J���C�G"); scanf("%d", &c);
   if( a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b ){
      if( a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b )
         printf("���T���ά������T����\n");
      else if( a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b )
         printf("���T���ά��y���T����\n");
      else if( a * a < b * b + c * c || b * b < a * a + c * c || c * c < a * a + b * b )
         printf("���T���ά��U���T����\n");
   } else
      printf("�o���O�@�ӤT���έ�\n");
   system("pause");
   return 0;
}


