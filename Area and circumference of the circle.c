# PROGRAM TO FIND THE AREA AND CIRCUMFERENCE OF THE CIRCLE

#CODE:
#include<stdio.h>
#include<conio.h>
#define PI 3.1427
void main()
{
  int r;
  float cir , area;
clrscr();
printf("\n ENTER THE RADIUS OF THE CIRCLE:");
scanf("%d" , &r);
cir = 2 PI*r;
area = PI*r*r;
printf("\n THE CIRCUMFERENCE OF CIRCLE IS = %f" , cir)'
print(" \n THE AREA OF THE CIRCLE IS =%f", area);
getch();
}

