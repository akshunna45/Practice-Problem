#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter A Number:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=1;
            break;
        }
    }
    if (sum==0)
        printf("%d Is A Prime Number.",n);
    else
        printf("%d Is Not A Prime Number.",n);
    return 0;
}
