#include<stdio.h>
#include<conio.h>
int main()
{
int array[100],position,c,n,value;
printf("Enter number of elements in array=>\n");
scanf("%d",&n);
printf("Enter %d elements=>\n",n);
for(c=0;c<n;c++)
scanf("%d",&array[c]);
printf("\nEnter the location where you wish to insert an element=>\n");
scanf("%d",&position);
printf("\nEnter the value to insert=>\n");
scanf("%d",&value);
for(c=n-1;c>=position-1;c--)
array[c+1]=array[c];
array[position-1]=value;
printf("\nResultant array is=>\n");
for(c=0;c<=n;c++)
printf("\t%d",array[c]);
return 0;
}
