#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int a, b, c, gcd;
printf("�п�J�ƭ�A�MB�p��GCD \n");
printf("�ƭ�A\n"); 
scanf("%d", &a);
printf("�ƭ�B\n");
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
