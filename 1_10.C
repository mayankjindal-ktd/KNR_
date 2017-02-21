/* wap to copy its input to its output,replacing tab by \t backspace by \b
backslash by \\*/

#include<stdio.h>
#include<conio.h>
void main()
{
 int c;
 clrscr();
 while((c=getchar())!=EOF)
 {
  if(c=='\t')
  {
  printf("\\t");
  }
  else if(c=='\b')
  {
   printf("\\b");
  }
  else if(c==92)
  {
  printf("\\\\");
  }
  else
  {
  putchar(c);
  }
 }
}