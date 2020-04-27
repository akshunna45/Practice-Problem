#include<stdio.h>
#include<conio.h>
int main()
{
int X,Y,Z;
printf("Enter size Of X,Y,Z ->\n");
scanf("%d%d%d",&X,&Y,&Z);
if(X<Y)
{
if(X<Z)
printf("X Is The smallest");
else
printf("Z Is The smallest");
}
else
{
if(Y<Z)
printf("Y Is The smallest");
else
printf("Z Is The smallest");
}
return 0;
}
