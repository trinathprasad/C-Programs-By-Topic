#include<stdio.h>
int main()
{
  float a[100],sum=0;
  int i,n;
  printf("Enter array size:");
  scanf("%d", &n);
  printf("Enter %d Elements",n);
  for(i=0;i<n;i++)
  {
    scanf("%f",&a[i]);
    sum=sum+a[i];
  }
  printf("Element Sum=%.2f, Avg=%.2f", sum, sum/n);
  return 0;
}