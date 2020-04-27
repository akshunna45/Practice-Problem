#include<stdio.h>
#include<conio.h>
int main()
{
int L,B,Area,Perimeter;
printf("Enter Length and Breadth of the Rectangle:\n");
scanf("%d%d",&L,&B);
Area=L*B;
Perimeter=2*(L+B);
if(Area>Perimeter)
printf("\nArea Is Greater than Perimeter.");
else
printf("\nArea Is Lesser than Perimeter.");
return 0;
}
