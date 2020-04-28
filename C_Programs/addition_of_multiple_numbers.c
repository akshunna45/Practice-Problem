#include<stdio.h>
#include<conio.h>
int main()
{
int value[100],i,n,sum=0;
printf("Enter number of values:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter value%d:",i+1);
scanf("%d",&value[i]);
sum+=value[i];
}
printf("total=%d",sum);
return 0;
}
