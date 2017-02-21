/* wap to count blanks,tabs,newline*/

#include<stdio.h>
#include<conio.h>
void main()
{
 int blank=0,tab=0,newline=0;
 char c;
 clrscr();
 printf("enter a paragraph \n");
 while((c=getchar())!=EOF)
 {
  if(c==' ')
  {
   blank++;
  }
  if(c=='\t')
  {
   tab++;
  }
  if(c=='\n')
  {
   newline++;
  }
 }
 printf("\nblank=%d\ttab=%d\tnewline=%d",blank,tab,newline);
 getch();
}
