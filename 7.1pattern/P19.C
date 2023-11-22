#include<stdio.h>
#include<conio.h>
main()
{
   int i,j,n=1;
   clrscr();

   for(i=5;i>=1;i--)
   {

      for(j=i;j<=5;j++)
      {
      printf("%d ",n);
      n++;
      }

      printf("\n");
   }
   getch();
}



