#include<stdio.h>
#include<conio.h>
void main()
{       int a=1,i,j;
         printf("PRINTED PATTERN:\n");
         for(i=0;i<=4;i++)
         {
            for(j=5-i;j<=5;j++)
             {
             if(j%2==0)
             { printf("0");

             }
             else
                printf("1");
             }
             printf("\n");
        }
}

