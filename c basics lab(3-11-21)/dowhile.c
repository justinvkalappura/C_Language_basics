#include<stdio.h>
#include<conio.h>
void main()
{       int a,b;
        //printf("PRINTED PATTERN:");
         printf("Enter number's below range:");
         scanf("%d",&a);
         printf("Enter number's highest range:");
         scanf("%d",&b);
         printf("NUMBERS ARE:");
         if(a%2==0)
         { }
         else
           {a=a+1;
           }
           do{
             printf("%d\n",a);
             a=a+2;
             }while(a<=b);

}

