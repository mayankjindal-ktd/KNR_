#include<stdio.h>
#include<conio.h>
void main()
{
 int c,blank=0;
 while((c=getchar())!=EOF)
 {
  if(c!=' ')
  {
   if(blank>0)
   {
    putchar(' ');
    blank=0;
   }
   else
   putchar(c);
  }
  if(c==' ')
  {
   ++blank;
  }
 }
}