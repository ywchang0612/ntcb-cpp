 #include <stdio.h>
 #include <stdlib.h>
int main()
{
    char a[80],*ptr;
    int i,j;
    printf("½Ð¿é¤J¤@¦r¦ê¡G\n");scanf("%s",&a);
    for (i=0; a[i]!='\0' ;i++)
    {
        for (j=0;j<=i;j++)
        printf("%c",a[i]);
            
    }
    system("pause");
}
