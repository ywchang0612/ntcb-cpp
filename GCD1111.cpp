#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int a, b, c, gcd;
printf("請輸入數值A和B計算GCD \n");
printf("數值A\n"); 
scanf("%d", &a);
printf("數值B\n");
scanf("%d", &b);
if(a<0)
a=-a;
if(b<0)
b=-b;
if(a*b==0)
{
printf("(a,b)=%d\n",c=a+b);
}
else
{
if(a<b)
{
c=a;
a=b;
b=c;
}
while(a%b !=0)
{
gcd=a%b;
a=b ; b=gcd;
}
printf("(a,b)=%d\n",b);
}
     system("pause");
     return 0;
} 
