#include<stdio.h>
int main()
{
  int a[100],n,t,i;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter %d integers",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n/2;i++)
  {
    t=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=t;
  }
  printf("Reversed elements ");
  for(i=0;i<n;i++)
  {
    printf("%3d",a[i]);
  }
  return 0;
}