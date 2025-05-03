#include<stdio.h>
int main()
{
  int a[30],n,i,j,t;
  printf("Enter the size of array:");
  scanf("%d",&n);
  printf("Enter %d elements:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
      }
    }
  }
  printf("After sort:");
  for(i=0;i<n;i++)
  {
    printf("%3d",a[i]);
  }
  printf("\nEven Elements:");
  for(i=0;i<n;i++)
  {
    if(a[i]%2==0)
    {
      printf("%3d",a[i]);
    }
  }
  printf("\nOdd Elements:");
  for(i=n-1;i>=0;i--)
  {
    if(a[i]%2!=0)
    {
      printf("%3d",a[i]);
    }
  }
  return 0;
  
}