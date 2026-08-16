# PROGRAM TO PRINT THE COLOR ACCORDING TO THE CODE 

#CODE:
#include<stdio.h>
#include<conio.h>
void main()
{
int code;
printf(" \ MAIN MENU ");
printf("\n1. for colour Red ");
printf("\n2. for colour Green');
printf("\n3. for colour White ");
printf("\n4. for colour Yellow");
printf("\n Enter the color code:");
scanf("%d" , &code);
switch((code)
{
case 1: 
printf("\n color is RED");
break;
case 2:
printf("\color is GREEN");
break;
case 3:
printf("\n color is WHITE");
break;
case 4:
printf("\n color is YELLOW");
break;
default:
printf(" \n Color does not found");
}
getch();
}



