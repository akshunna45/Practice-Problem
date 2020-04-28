#include<stdio.h>
int main()
{
int c,n,fact=1;
printf("Enter A number To Calculate It's Factorial->\n");
scanf("%d",&n);
for(c=1;c<=n;c++)
fact=fact*c;
printf("Factorial of %d=%d\n",n,fact);
return 0;
}
