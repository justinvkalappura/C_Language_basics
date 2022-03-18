#include<stdio.h>
#include<conio.h>
void main()
{       int a,i,j;
         printf("PRINTED PATTERN:\n");
         for(i=0;i<=5;i++)
         {  for(j=0;j<=5;j++)
             {  if(i%2==0)
                  printf("1");
                else
                  printf("0");
             }
             printf("\n");
        }
}

