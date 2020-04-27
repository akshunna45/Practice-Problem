#include<stdio.h>
#include<conio.h>
int main()
{
int No;
printf("Enter Any Number:\n");
scanf("%d",&No);
if(No<0)
No=No*-1;
printf("\nThe Absolute Value Of Given Number Is %d",No);
return 0;
}
