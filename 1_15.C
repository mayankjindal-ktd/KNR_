#include<stdio.h>
#include<conio.h>
float fahr(float);
void main()
{
 float i;
 clrscr();
 printf("fahrenheit\tcelcius\n");
 for(i=0;i<=300;(i=i+20))
 {
  printf("%f\t%f\n",i,fahr(i));
 }
 getch();
}

float fahr(float num)
{
 float cel;
 cel=5.0*(num-32)/9;
 return cel;
}