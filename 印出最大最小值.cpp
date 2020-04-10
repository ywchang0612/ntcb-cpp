 #include <stdio.h>
 #include <stdlib.h>
int main()
{
    float n,large=0,low=0;
    do
    {
        printf("Enter a number:");scanf("%f",&n);
        if (n>0)
        {
           if (n>large||large==0)
              large=n;
           if (n<low||low==0)
              low=n;
        }
        if (n<=0)
             break;
    }while(n>0);
    printf("\n");
    if (large==low)
    {
       printf("there is no largest and lowset number\n");
    }
    else
    {
        printf("The largest number entered was %.4f \nThe lowset number entered was %.4f\n",large,low);
    }
    system("pause");
}
