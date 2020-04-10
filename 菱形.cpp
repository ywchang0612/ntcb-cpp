#include<stdio.h>
#include<stdlib.h>
 
int main()
{
	int a,b,c,d,e,f;
	printf("請勿輸入非數字。\n");
	A:printf("請輸入菱形長度(必須是奇數)，離開請輸入0：");
	scanf("%d",&a);
	if(a==0)
	{
		return 0;
	}
	if(a%2==0)
	{
		goto A;
	}
	
	
	f=(a+1)/2;
	for(b=1;b<=f;b++)
	{
		for(d=f-b;d>0;d--)
		{
		printf(" ");
		}
		for(e=1;e<=2*b-1;e++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(b=f-1;b>0;b--)
	{
		for(d=f-b;d>0;d--)
		{
			printf(" ");
		}
		for(e=1;e<=2*b-1;e++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	goto A;
}
