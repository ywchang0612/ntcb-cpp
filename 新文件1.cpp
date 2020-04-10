#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int x,x1,n=0,i;
    do
    {
     printf("輸入:");
     scanf("%d",&x);
     if (x<=0)
        {
        printf("不能小於0!\n請重新輸入!\n");
        system("pause");
        system("cls");
        }
     }   
     while (x<=0);
    
    x1=x;
    while((x1%2!=1))
    {
       x1=x1/2;
       n++;
    }
    if (x1==1)
    printf ("%d是2的%d次方\n",x,n);
    else
    printf("%d不是2的次方\n",x);

    system("pause");
    return 0;
}
