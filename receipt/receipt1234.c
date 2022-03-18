#include<conio.h>
#include<stdio.h>
void main()
{     int v=-1,b=0,c[100],d[100],total[100],j=0,m[100],i;
      char z='|',a[100][100],o;
      printf("\n\n****************************************WELCOME TO THE WORLD OF FOODIE's*********************************************\n");
      printf("\n                                          -----KINDLY PLACE YOUR ORDER------\n\n");
      for(i=0;i<119;i++)
      printf("-");
      do{  v++;
           printf("\nEnter the item name:");
           scanf("%s",&a[v]);
           printf("Enter the quantity:");
           scanf("%d",&c[v]);
           printf("Enter the unit price:");
           scanf("%d",&d[v]);
           total[v]=c[v]*d[v];
           j=j+total[v];
            b=b+1;
           printf("Do you want to continue(y/n)?");
           scanf("%s",&o);
           printf("-------------------------------------------------------------------------------------------------------------------------\n");
           }while(o!='n');
      printf("\n\n");
      for(i=0;i<119;i++)
      printf("|");
      printf("\n||\t\t\t\t\t\t\tEAT MARKETING%49c%c\n",z,z);
      printf("||SERIAL NUMBER:001\t\t\t\t\t\t\t\t\t\tDATE:15/05/2000      ||",i,z);
      printf("\n");
      for(i=0;i<119;i++)
      printf("|");
      printf("\n||     SERIAL NUMBER%6c         NAME%10c      QUANTITY%9c     UNIT PRICE%8c      TOTAL PRICE%6c%c\n",z,z,z,z,z,z);
      for(i=0;i<119;i++)
      printf("|");
      printf("\n");
      for(v=-1;v<b;v++)
       printf("\t   %d\t\t\t%s\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t\n",v+1,a[v],c[v],d[v],total[v]);
      for(i=0;i<119;i++)
      printf("|");
      printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTOTAL\t%d\n",j);
      for(i=0;i<119;i++)
      printf("|");
      printf("\n\n\n                                           ----THANK YOU..VISIT AGAIN----\n");
      printf("\n\n\n*************************************************************************************************************************");
}

