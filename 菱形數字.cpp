 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
void diamond(int x);
int main()
{
    int n;
      do
      {
          printf("�п�J���n,n���_��:");scanf("%d",&n);
          if (n%2==0)
             { printf("n���o������!\n");
               system("pause");
               }
      }while(n%2==0);
      
      diamond(n);     
      system("pause");
}

void diamond (int x)
{
     int i,j;
     x=(x-1)/2;
     for (i=-x;i<=x;i++)
      {
          for (j=-x;j<=x;j++)
          {
              if (abs(i)+abs(j)>x)
                 printf(" ");
              else
                 printf("%d",(abs(j)+abs(i))+1); //abs(x)��ܵ���� 
                 
          }
          printf("\n");
      }
}
