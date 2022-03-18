#include<stdio.h>
#include<conio.h>
void main()
{       int a,i,j;
         printf("PRINTED PATTERN:\n");
         for(i=0;i<=5;i++)
         {  a=1;
             for(j=6-i;j<=5;j++)
             {  printf("%d",a);
                a++;
             }
             printf("\n");
        }
}

