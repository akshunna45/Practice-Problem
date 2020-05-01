#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int size;
    int i,j,temp;
    printf("Enter Size Of Array:");
    scanf("%d",&size);
    printf("Enter Elements In Array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nElements Of Array In Ascending Order:");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
