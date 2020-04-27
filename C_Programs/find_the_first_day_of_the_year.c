#include<stdio.h>
#include<conio.h>
int main()
{
int Leapdays,Firstday,Year;
long int Normaldays,Totaldays;
printf("Enter Year:");
scanf("%d",&Year);
Normaldays=(Year-1)*365L;
Leapdays=(Year-1)/4-(Year-1)/100+(Year-1)/400;
Totaldays=Normaldays+Leapdays;
Firstday=Totaldays%7;
if(Firstday==0)
printf("Monday\n");
if(Firstday==1)
printf("Tuesday\n");
if(Firstday==2)
printf("Wednesday\n");
if(Firstday==3)
printf("Thursday\n");
if(Firstday==4)
printf("Friday\n");
if(Firstday==5)
printf("Saturday\n");
if(Firstday==6)
printf("Sunday\n");
return 0;
}



