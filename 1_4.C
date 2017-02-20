#include<stdio.h>
#include<conio.h>
void main()
{
 float fahr,celsius,upper;
 int lower,step;
 clrscr();
 lower=0;         /* lower limit of temperature scale*/
 upper=300;       /* upper limit */
 step=20;         /* step size */
 celsius=lower;
 printf("celsius\t\tfahrenheit\n");
 while(celsius<=upper)
 {
  fahr=((celsius*9)/5)+32;
  printf("%f\t%f\n",celsius,fahr);
  celsius=celsius+step;
 }
 getch();
}