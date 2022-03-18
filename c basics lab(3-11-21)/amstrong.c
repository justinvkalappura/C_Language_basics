#include<stdio.h>
#include<conio.h>
void main()
{       int a,b,c=0,sasi;
        printf("Enter a three digit number:");
        scanf("%d",&a);
        sasi=a;
        while(a>0)
        { b=a%10;
          c=c+(b*b*b);
          a=a/10;
        }
        if(c==sasi)
        printf("%d is a amstrong.",sasi);
        else
        printf("%d is not amstrong.",sasi);
}

