#include<stdio.h>
int main()
{
  int a[100],n,i,j,t;
  printf("Enter the size of array:");
  scanf("%d",&n);
  printf("Enter %d elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-2;i++)  //for(i=0;i<n;i++)
  {
    for(j=i+1;j<n-1;j++)  //for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
  printf("Sorted elements are:");
  for(i=0;i<n;i++)
  {
    printf("%3d",a[i]);
  }
  return 0;
}