# PROGRAM TO COMPUTE THE CIRCUMFERENCE AND VOLUME OF A SPHERE.

#CODE:
#include<stdio.h>
#include<conio.h>
#define PI 3.1427
void main()
{
int r;
float cir, vol;
clrscr();
printf("\n ENTER THE RADIUS OF THE SPHERE")
scanf("%d" ,&r);
cir = 4*PI*r*r;
vol = 4/3*PI*r*r*r;
printf("\n CIRCUMFERENCE OF SPHERE IS=  %f" , cir);
printf("\n VOLUME OD SPHERE IS= %f", vol);
getche();
}
