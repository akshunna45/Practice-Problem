#include<stdio.h>
#include<conio.h>
int main()
{
float angle1,angle2,angle3;
printf("Enter three angles of the triangle:\n");
scanf("%f%f%f",&angle1,&angle2,&angle3);
if((angle1+angle2+angle3)==180)
printf("\nThe triangle is a valid triangle.");
else
printf("\nThe triangle is an invalid triangle.");
return 0;
}
