#include<stdio.h>
int main()
{
  int n,i,a[16]={0};
  printf("printf enter the decimal no:");
  scanf("%d",&n);
  for(i=0;n!=0;n=n/2,i++)
  {
    a[i]=n%2; //dec to bin
  }
  for(i=15;i>=0;i--)
  {
    printf("%2d",a[i]);
  }
  return 0;

}