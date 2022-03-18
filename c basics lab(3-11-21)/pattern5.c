#include<stdio.h>
#include<conio.h>
void main()
{       int a=1,i,j;
         printf("PRINTED PATTERN:\n");
         for(i=0;i<=4;i++)
         {
            for(j=5-i;j<=5;j++)
             {
             printf("%d",a);

          }a++;
             printf("\n");
        }
}

