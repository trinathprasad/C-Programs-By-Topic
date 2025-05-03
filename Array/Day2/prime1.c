#include<stdio.h>
int main()
{
  int a[100],n,i,j,c;
  printf("Enter the size of array:");
  scanf("%d",&n);
  printf("Enter %d Elements",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(c=0,j=2;j<a[i]/2;j++)
    {
      if(a[i]%j==0)
      {
        printf("%d is a composite no.\n",a[i]);
        c++;
        break;
      }
    }
    if(a[i]==1)
    {
      printf(" 1 is not a composite no/prime no\n");
    }
    else if(c==0)
    {
      printf("%d is a prime no\n", a[i]);
    }
  }
  return 0;
}