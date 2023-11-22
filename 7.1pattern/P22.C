#include<stdio.h>
#include<conio.h>
main()
{
   int i,j;
   char n='A';

   clrscr();

   for(i=5;i>=1;i--)
   {

      for(j=i;j<=5;j++)
      {
	printf("%c ",n++);
      }

      printf("\n");
   }
   getch();
}