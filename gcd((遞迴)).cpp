#include <stdio.h>
#include <stdlib.h>
int gcd(int,int);
int main(void)
{
     int i,j,k;
     printf("�п�J���@�����:\n");
     scanf("%d",&i);
     printf("�п�J�t�@�����:\n");
     scanf("%d",&j);
     k=gcd(i,j);
     printf("�̤j���]�Ƭ�%d\n",k);

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

