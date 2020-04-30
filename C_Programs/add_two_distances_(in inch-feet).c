#include<stdio.h>
#include<conio.h>
struct Distance
{
    int feet;
    float inch;
}
    d1,d2, sumofDistances;
int main()
{
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d",&d1.feet);
    printf("Enter inch: ");
    scanf("%f",&d1.inch);
    printf("\nEnter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);

    sumofDistances.feet=d1.feet+d2.feet;
    sumofDistances.inch=d1.inch+d2.inch;
    if (sumofDistances.inch>12.0)
    {
	sumofDistances.inch=sumofDistances.inch-12.0;
	++sumofDistances.feet;
	}
	printf("\nSum of Distances= %d\'-%.1f\"",sumofDistances.feet,sumofDistances.inch);
	getch();
}
