#include <stdio.h>
#include <stdlib.h>
int gcd(int,int);
int main(void)
{
     int i,j,k;
     printf("請輸入任一正整數:\n");
     scanf("%d",&i);
     printf("請輸入另一正整數:\n");
     scanf("%d",&j);
     k=gcd(i,j);
     printf("最大公因數為%d\n",k);

     system("pause");
     return 0;

}     
     int gcd(int a,int b)
     {
         if((a%b)==0)
            return b;	
         else
             return gcd(b,a%b);

}

