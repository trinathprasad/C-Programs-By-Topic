#include<stdio.h>
int main()
{
  int a[100],n,i;
  printf("Enter the size of array.");
  scanf("%d",&n);
  printf("Enter %d elements:", n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n/2;i++)
  {
    a[i]=a[i]+a[n-i-1];
    a[n-i-1]=a[i]-a[n-i-1];
    a[i]=a[i]-a[n-i-1];
  }
  printf("Revered elements");
  for(i=0; i<n; i++)
  {
    printf("%3d",a[i]);
  }
  return 0;
}