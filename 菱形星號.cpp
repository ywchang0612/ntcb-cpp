 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
int main()
{
      int i,j;
      for (i=-2;i<=2;i++)
      {
          for (j=-2;j<=2;j++)
          {
              if (abs(i)+abs(j)>2)
                 printf(" ");
              else
                 printf("*");
          }
          printf("\n");
      }
      system("pause");
}
