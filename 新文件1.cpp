#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int x,x1,n=0,i;
    do
    {
     printf("��J:");
     scanf("%d",&x);
     if (x<=0)
        {
        printf("����p��0!\n�Э��s��J!\n");
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
    printf ("%d�O2��%d����\n",x,n);
    else
    printf("%d���O2������\n",x);

    system("pause");
    return 0;
}
