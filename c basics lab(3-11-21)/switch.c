#include<stdio.h>
#include<conio.h>
void main()
{       char a;
        printf("Enter a alphabet:");
        scanf("%c",&a);
        switch(a)
         {   default: printf("%c is not a vowel.",a);
                      break;
             case 'a':
             case 'e':
             case 'i':
             case 'o':
             case 'u':printf("%c is a vowel.\n",a);
                     break;
          }
    }
