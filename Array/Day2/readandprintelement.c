#include<stdio.h>
int main()
{
  int a[100], i,n;
  printf("Enter array size");
  scanf("%d",&n);
  if(n<1 || n>100)
  {
    printf("Array size 1-100 only");
  }
  else
  {
    printf("Enter %d elements", n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("Elements are ");
    for(i=0 ; i<n ; i++)
    {
      printf("%4d",a[i]);
    }
  }
  return 0;
}