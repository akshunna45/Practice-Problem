#include<stdio.h>
int main()
{
int i,j,rows,k=0,c=0,c1=0;
printf("Enter number of rows:");
scanf("%d",&rows);
for(i=1;i<=rows;++i)
{
for(j=1;j<=rows-i;++j)
{
printf(" ");
++c;
}
while(k!=2*i-1)
{
if(c<=rows-1)
{
printf("*",i+k);
++c;
}
else
{
++c1;
printf("*",(i+k-2*c1));
}
++k;
}
c1=c=k=0;
printf("\n");
}
return 0;
}
