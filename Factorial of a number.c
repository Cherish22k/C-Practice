# PROGRAM TO FIND THE FACTORIAL OF A NUMEBR

#CODE:
#include<stdio.h>
#include<dos.h>
#include<conio.h>
void main()
{
  int n,i,m;
  circr();
printf("\n Enter the number:");
scanf("%d" , &n);
m=1;
for (i=1; i<=n; i++)
{
m=m*i;
}
printf("\n Factorial of %d is = %d" , n,m);
}
