#include<stdio.h>
#include<conio.h>
void main()
{
 float fahr,celsius;
 int lower,upper,step;
 clrscr();
 lower=0;         /* lower limit of temperature scale*/
 upper=300;       /* upper limit */
 step=20;         /* step size */
 fahr=lower;
 printf("fehrenheit\tcelsius\n");
 while(fahr<=upper)
 {
  celsius=5*(fahr-32)/9.0;
  printf("%f\t%f\n",fahr,celsius);
  fahr=fahr+step;
 }
 getch();
}
