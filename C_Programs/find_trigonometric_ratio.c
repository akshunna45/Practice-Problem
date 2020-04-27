#include<stdio.h>
#include<math.h>
int main()
{
float angle,a,b,c,d,e,f;
printf("Enter an angle-> \n");
scanf("%f",&angle);

angle=angle*3.14/180;
a=sin(angle);
b=cos(angle);
c=tan(angle);
d=1/c;
e=1/b;
f=1/a;
printf("\nsin=%f \ncos=%f \ntan=%f \ncot=%f \nsec=%f \ncosec=%f",a,b,c,d,e,f);
return 0;
}
