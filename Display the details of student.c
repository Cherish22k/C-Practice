""CODE""

#include<stdio.h>
  struct student{
char name[50];
int roll;
char branch[50];
float cgpa;
};
int main()
{
  struct student s;
printf("Enter name , Roll , Branch , CGPA \\n);
scanf("%s %d %s %f" , s.name , s.roll , s.branch , s.cgpa);
printf("\N  Name: %s \n Roll: %d \n Branch: %s\n CGPA: %.2f\n" ,s.name , s.roll , s.branch , s.cgpa);
return 0 ;
}

""OUTPUT""
Name: XYZ
Roll: 112
Branch: BTECH
CGPA: 9.4
