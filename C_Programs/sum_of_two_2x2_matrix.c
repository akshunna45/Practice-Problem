#include<conio.h>
#include<stdio.h>
int main()
{
int b[2][2],c[2][2],a[2][2];
int i,j;
printf("Enter the elements of 1st matrix\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the elements of 2nd matrix\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("\nSum of matrix:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d",c[i][j]);
if(j==1)
printf("\n");
}
}
return 0;
}
