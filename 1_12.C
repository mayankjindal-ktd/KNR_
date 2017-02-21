#include<stdio.h>
#include<conio.h>
void main()
{
 int c,word;
 clrscr();
 while((c=getchar())!=EOF)
 {
  if(c!=' ' && c!='\t')
  {
  putchar(c);
  word=0;
  }
  else if((c==' ' || c=='\t')&& word==0)
  {
   printf("\n");
   ++word;
  }
 }
 getch();
}