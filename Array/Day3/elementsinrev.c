#include<stdio.h>
int main()
{
  int a[100], i, n;
  printf("Enter array size");
  scanf("%d",&n);
  printf("Enter %d integers",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Reversed elements");
  for(i=n-1;i>=0;i--)
  {
    printf("%3d",a[i]);
  }
  return 0;
}