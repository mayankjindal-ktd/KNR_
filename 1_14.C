#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int i,j,character[128],c;
 clrscr();

 for(i=0;i<128;i++)
 character[i]=0;
 while((c=getchar())!=EOF)
 ++character[c];
 for(i=0;i<128;i++)
 {
  putchar(i);
  for(j=0;j<character[i];j++)
  {
   printf("*");
  }
  printf("\n");
 }
 getch();
}