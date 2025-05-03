#include<stdio.h>
int main()
{
  int a[100],n,max,min,i;
  printf("Enter size of array");
  scanf("%d",&n);
  printf("Enter %d Elements", n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(min=max=a[0],i=1; i<n;i++)
  {
    if(min>a[i])min=a[i];
    if(max<a[i]) max=a[i];
  }
  printf("Min=%d , Max=%d", min, max);
  return 0;

}