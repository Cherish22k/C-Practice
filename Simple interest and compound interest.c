#PROGRAM TO COMPUTE SIMPLE INTEREST AND COMPOUND INTEREST

#CODE:
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
float p,r,t,si,ci;
printf("\n Enter the value of the Principle, Rate , Time:");
scanf("%f%f%f" %p%r%t);
si=(p*r*t)/100;
ci=p*pow(1+r/100),t)-p;
printf("\n Simple interest is = %f" , si);
printf("\n Compounf interest is = %f",ci);
sleep(10);
}
