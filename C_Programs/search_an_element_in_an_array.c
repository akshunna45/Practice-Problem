#include<stdio.h>
#include<conio.h>
int main()
{
  int array[100],search,c,n;
  printf("Enter The Number Of Elements In Array\n");
  scanf("%d",&n);
  printf("Enter %d Integer\n",n);
  for (c=0;c<n;c++)
    scanf("%d",&array[c]);
  printf("Enter A Number To Search\n");
  scanf("%d",&search);

  for (c=0;c<n;c++)
  {
    if (array[c]==search)
    {
      printf("%d Is Present At Location %d\n",search,c+1);
      break;
    }
  }
  if (c==n)
  printf("%d Is Not Present In The Array\n",search);
  return 0;
}
